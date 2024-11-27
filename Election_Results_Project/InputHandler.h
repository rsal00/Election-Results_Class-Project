/*
    KDR Coders - Daniel Ruiz, Kun Fang, Ruben Salazar, Sean Zhou
    CMPR 121 - Fall 2024
    November 20, 2024
 
    Final Project
 
    Collaboration:
    Daniel Ruiz, Kun Fang, Sean Zhou
*/

#include <iostream>
#include <fstream>
#include <string>
#include "CandidateList.h"
using namespace std;

void createCandidateList(ifstream& infile, CandidateList& candidateList)
{
	int ssn = 0;
	int allVotes[NUM_OF_CAMPUSES];
	string  fName, lName;

	infile >> ssn;
    
	while (ssn != -999)
	{
		CandidateType newCandidate;

		infile >> fName;
		infile >> lName;
		newCandidate.setPersonInfo(fName, lName, ssn);
        
		for (int i = 0; i < NUM_OF_CAMPUSES; i++)
		{
			infile >> allVotes[i];
			newCandidate.updateVotesByCampuses(i+1, allVotes[i]);
		}
        std::cout << endl;
		candidateList.addCandidate(newCandidate);

		infile >> ssn;
	}
}

void readCandidateData(CandidateList& candidateList)
{
	ifstream infile;

	infile.open("/Users/rubensalazar/Desktop/CMPR121/Final Project/Election_Results_Project/Election_Results_Project/candidate_data.txt");

	if (!infile)
	{
		cerr << "Input file does not exist." << endl;
		exit(1);
	}

	createCandidateList(infile, candidateList);

	infile.close();
}
