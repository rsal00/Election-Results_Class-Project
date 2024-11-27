/*
    KDR Coders - Daniel Ruiz, Kun Fang, Ruben Salazar, Sean Zhou
    CMPR 121 - Fall 2024
    November 20, 2024
 
    Final Project
 
    Collaboration:
    Daniel Ruiz, Kun Fang, Sean Zhou
*/

#include "InputHandler.h"
#include <iostream>
using namespace std;

void displayMenu();
void processChoice(CandidateList& candidateList);

int main()
{
	//Create the list
	CandidateList candidateList;

	//fill the list with candidates data
	readCandidateData(candidateList);

	//Make a choice
	displayMenu();

	//Process the choice
	processChoice(candidateList);

	cout  <<  endl;
	system("Pause");
	return 0;
}

void displayMenu()
{
	cout << "*** MAIN MENU ***\n";
	cout << "\nSelect one of the following:\n\n";
	cout << "    1: Print all candidates" << endl;
	cout << "    2: Print a candidate's campus votes" << endl;
	cout << "    3: Print a candidate's total votes" << endl;
	cout << "    4: Print winner" << endl;
	cout << "    5: Print final results" << endl;
	cout << "    6: To exit" << endl;
}

void processChoice(CandidateList& candidateList)
{
	int choice;
	cout << "\nEnter your choice: ";
	cin >> choice;

	while (choice != 6)
	{
		string fName, lName;
		int ssn = 0;

		switch (choice)
		{
			// Print all candidates
		case 1:
			candidateList.printAllCandidates();

			cout << endl;
			break;

			// Print a candidates's campus votes
		case 2:
			cout << "\nEnter candidate's social security number (no dashes): ";
			cin >> ssn;
			cout << endl;
			if (candidateList.searchCandidate(ssn))
			{
				candidateList.printCandidateName(ssn);
				//cout << endl;
				for (int i = 1; i <= NUM_OF_CAMPUSES; ++i)
					candidateList.printCandidateCampusVotes(ssn, i);
			}
			cout << endl;
			break;

			// Print a candidate's total votes
		case 3:
			cout << "\nEnter candidate's social security number (no dashes): ";
			cin >> ssn;
			cout << endl;
			if (candidateList.searchCandidate(ssn))
			{
				candidateList.printCandidateTotalVotes(ssn);
			}
			cout << endl << endl;
			break;

			// Print winner
		case 4:
			ssn = candidateList.getWinner();
			if (ssn != 0)
			{
				cout << "\nElection winner: ";
				candidateList.printCandidateTotalVotes(ssn);
			}
			else
			{
				cout << "\n    => There are no candidates." ;
			}
			cout << endl << endl;
			break;

		case 5: // prints totall votes and name of each candidate
            cout << endl;
            candidateList.printr();
            cout << endl;
            break;

		default:
            cout << "\n    => Sorry. That is not a selection. \n" ;
            cout << endl;
		}
		displayMenu();
		cout << "\nEnter your choice: ";
		cin >> choice;
	}
	if (choice == 6)
		cout << "\nThank you and have a great day!" << endl;
}
