/*
    KDR Coders - Daniel Ruiz, Kun Fang, Ruben Salazar, Sean Zhou
    CMPR 121 - Fall 2024
    October 15, 2024
 
    Final Project
 
    Collaboration:
    Daniel Ruiz, Kun Fang, Sean Zhou
*/

#include <iostream>
#include "PersonType.h"
#include "CandidateType.h"
#include "CandidateList.h"
using namespace std;

int main()
{
    CandidateType candidate1;
    CandidateType candidate2;
    CandidateType candidate3;
    CandidateType candidate4;
    CandidateType candidate5;
    CandidateType candidate6;
    CandidateType candidate7;
    CandidateType candidate8;
    CandidateType candidate9;
    CandidateType candidate10;
    CandidateType candidate11;
    CandidateType candidate12;
    CandidateType candidate13;
    CandidateType candidate14;
    CandidateType candidate15;
    CandidateType candidate16;
    CandidateType candidate17;
    CandidateType candidate18;
    CandidateType candidate19;
    CandidateType candidate20;
    CandidateType candidate21;
    CandidateType candidate22;
    CandidateType candidate23;
    CandidateType candidate24;
    CandidateType candidate25;
    CandidateType candidate26;
    CandidateType candidate27;
    CandidateType candidate28;
    CandidateType candidate29;
    CandidateType candidate30;
    CandidateType candidate31;
    CandidateList list;
    
    candidate1.setPersonInfo("Edward", "Stark", 123456789);
    candidate1.updateVotesByCampuses(1, 89);
    candidate1.updateVotesByCampuses(2, 41);
    candidate1.updateVotesByCampuses(3, 45);
    candidate1.updateVotesByCampuses(4, 5);
    
    candidate2.setPersonInfo("Jaime", "Lannister", 789567856);
    candidate2.updateVotesByCampuses(1, 12);
    candidate2.updateVotesByCampuses(2, 32);
    candidate2.updateVotesByCampuses(3, 10);
    candidate2.updateVotesByCampuses(4, 33);
    
    candidate3.setPersonInfo("Catelyn", "Stark", 342772712);
    candidate3.updateVotesByCampuses(1, 34);
    candidate3.updateVotesByCampuses(2, 4);
    candidate3.updateVotesByCampuses(3, 6);
    candidate3.updateVotesByCampuses(4, 56);
    
    candidate4.setPersonInfo("Joffrey", "Baratheon", 756412376);
    candidate4.updateVotesByCampuses(1, 44);
    candidate4.updateVotesByCampuses(2, 34);
    candidate4.updateVotesByCampuses(3, 83);
    candidate4.updateVotesByCampuses(4, 56);
    
    candidate5.setPersonInfo("Daenerys", "Targaryen", 823774545);
    candidate5.updateVotesByCampuses(1, 27);
    candidate5.updateVotesByCampuses(2, 4);
    candidate5.updateVotesByCampuses(3, 87);
    candidate5.updateVotesByCampuses(4, 17);
    
    candidate6.setPersonInfo("Jorah", "Mormont", 321452679);
    candidate6.updateVotesByCampuses(1, 5);
    candidate6.updateVotesByCampuses(2, 0);
    candidate6.updateVotesByCampuses(3, 42);
    candidate6.updateVotesByCampuses(4, 34);
    
    candidate7.setPersonInfo("Petyr", "Baelish", 234564564);
    candidate7.updateVotesByCampuses(1, 13);
    candidate7.updateVotesByCampuses(2, 75);
    candidate7.updateVotesByCampuses(3, 22);
    candidate7.updateVotesByCampuses(4, 21);
    
    candidate8.setPersonInfo("Viserys", "Targaryen", 783498932);
    candidate8.updateVotesByCampuses(1, 3);
    candidate8.updateVotesByCampuses(2, 12);
    candidate8.updateVotesByCampuses(3, 6);
    candidate8.updateVotesByCampuses(4, 45);
    
    candidate9.setPersonInfo("Jon", "Snow", 111222333);
    candidate9.updateVotesByCampuses(1, 23);
    candidate9.updateVotesByCampuses(2, 73);
    candidate9.updateVotesByCampuses(3, 67);
    candidate9.updateVotesByCampuses(4, 75);
    
    candidate10.setPersonInfo("Sansa", "Stark", 123994543);
    candidate10.updateVotesByCampuses(1, 0);
    candidate10.updateVotesByCampuses(2, 14);
    candidate10.updateVotesByCampuses(3, 43);
    candidate10.updateVotesByCampuses(4, 45);
    
    candidate11.setPersonInfo("Arya", "Stark", 968453641);
    candidate11.updateVotesByCampuses(1, 34);
    candidate11.updateVotesByCampuses(2, 56);
    candidate11.updateVotesByCampuses(3, 4);
    candidate11.updateVotesByCampuses(4, 12);
    
    candidate12.setPersonInfo("Robb", "Stark", 862938766);
    candidate12.updateVotesByCampuses(1, 64);
    candidate12.updateVotesByCampuses(2, 35);
    candidate12.updateVotesByCampuses(3, 45);
    candidate12.updateVotesByCampuses(4, 65);
    
    candidate13.setPersonInfo("Bran", "Stark", 714338893);
    candidate13.updateVotesByCampuses(1, 44);
    candidate13.updateVotesByCampuses(2, 24);
    candidate13.updateVotesByCampuses(3, 4);
    candidate13.updateVotesByCampuses(4, 26);
    
    candidate14.setPersonInfo("Theon", "Greyjoy", 653456789);
    candidate14.updateVotesByCampuses(1, 73);
    candidate14.updateVotesByCampuses(2, 34);
    candidate14.updateVotesByCampuses(3, 50);
    candidate14.updateVotesByCampuses(4, 4);
    
    candidate15.setPersonInfo("Cersei", "Lannister", 123459876);
    candidate15.updateVotesByCampuses(1, 87);
    candidate15.updateVotesByCampuses(2, 86);
    candidate15.updateVotesByCampuses(3, 79);
    candidate15.updateVotesByCampuses(4, 82);
    
    candidate16.setPersonInfo("Sandor", "Clegane", 576232577);
    candidate16.updateVotesByCampuses(1, 89);
    candidate16.updateVotesByCampuses(2, 33);
    candidate16.updateVotesByCampuses(3, 46);
    candidate16.updateVotesByCampuses(4, 0);
    
    candidate17.setPersonInfo("Tyrion", "Lannister", 438922191);
    candidate17.updateVotesByCampuses(1, 91);
    candidate17.updateVotesByCampuses(2, 36);
    candidate17.updateVotesByCampuses(3, 47);
    candidate17.updateVotesByCampuses(4, 25);
    
    candidate18.setPersonInfo("Tywin", "Lannister", 321452345);
    candidate18.updateVotesByCampuses(1, 5);
    candidate18.updateVotesByCampuses(2, 0);
    candidate18.updateVotesByCampuses(3, 47);
    candidate18.updateVotesByCampuses(4, 34);
    
    candidate19.setPersonInfo("Davos", "Seaworth", 968644641);
    candidate19.updateVotesByCampuses(1, 34);
    candidate19.updateVotesByCampuses(2, 55);
    candidate19.updateVotesByCampuses(3, 4);
    candidate19.updateVotesByCampuses(4, 12);
    
    candidate20.setPersonInfo("Samwell", "Tarly", 862912366);
    candidate20.updateVotesByCampuses(1, 64);
    candidate20.updateVotesByCampuses(2, 34);
    candidate20.updateVotesByCampuses(3, 45);
    candidate20.updateVotesByCampuses(4, 65);
    
    candidate21.setPersonInfo("Margaery", "Tyrell", 914335693);
    candidate21.updateVotesByCampuses(1, 44);
    candidate21.updateVotesByCampuses(2, 24);
    candidate21.updateVotesByCampuses(3, 0);
    candidate21.updateVotesByCampuses(4, 26);
    
    candidate22.setPersonInfo("Stannis", "Baratheon", 835452887);
    candidate22.updateVotesByCampuses(1, 4);
    candidate22.updateVotesByCampuses(2, 75);
    candidate22.updateVotesByCampuses(3, 42);
    candidate22.updateVotesByCampuses(4, 5);
    
    candidate23.setPersonInfo("Jeor", "Mormont", 245553564);
    candidate23.updateVotesByCampuses(1, 13);
    candidate23.updateVotesByCampuses(2, 75);
    candidate23.updateVotesByCampuses(3, 23);
    candidate23.updateVotesByCampuses(4, 21);
    
    candidate24.setPersonInfo("Talisa", "Maegyr", 998877665);
    candidate24.updateVotesByCampuses(1, 37);
    candidate24.updateVotesByCampuses(2, 37);
    candidate24.updateVotesByCampuses(3, 0);
    candidate24.updateVotesByCampuses(4, 56);
    
    candidate25.setPersonInfo("Tormund", "Giantsbane", 111232633);
    candidate25.updateVotesByCampuses(1, 23);
    candidate25.updateVotesByCampuses(2, 73);
    candidate25.updateVotesByCampuses(3, 62);
    candidate25.updateVotesByCampuses(4, 75);
    
    candidate26.setPersonInfo("Ramsay", "Bolton", 123674543);
    candidate26.updateVotesByCampuses(1, 0);
    candidate26.updateVotesByCampuses(2, 13);
    candidate26.updateVotesByCampuses(3, 43);
    candidate26.updateVotesByCampuses(4, 45);
    
    candidate27.setPersonInfo("Ellaria", "Sand", 673367856);
    candidate27.updateVotesByCampuses(1, 12);
    candidate27.updateVotesByCampuses(2, 34);
    candidate27.updateVotesByCampuses(3, 10);
    candidate27.updateVotesByCampuses(4, 33);
    
    candidate28.setPersonInfo("Daario", "Naharis", 342932712);
    candidate28.updateVotesByCampuses(1, 34);
    candidate28.updateVotesByCampuses(2, 4);
    candidate28.updateVotesByCampuses(3, 5);
    candidate28.updateVotesByCampuses(4, 56);
    
    candidate29.setPersonInfo("Roose", "Bolton", 112233445);
    candidate29.updateVotesByCampuses(1, 89);
    candidate29.updateVotesByCampuses(2, 56);
    candidate29.updateVotesByCampuses(3, 0);
    candidate29.updateVotesByCampuses(4, 24);
    
    candidate30.setPersonInfo("Tommen", "Baratheon", 937656789);
    candidate30.updateVotesByCampuses(1, 89);
    candidate30.updateVotesByCampuses(2, 34);
    candidate30.updateVotesByCampuses(3, 45);
    candidate30.updateVotesByCampuses(4, 5);
    
    candidate31.setPersonInfo("Khal", "Drogo", 987654321);
    candidate31.updateVotesByCampuses(1, 89);
    candidate31.updateVotesByCampuses(2, 54);
    candidate31.updateVotesByCampuses(3, 0);
    candidate31.updateVotesByCampuses(4, 24);
    
    const int SIZE = 31;
    CandidateType candidates[SIZE] = {
        candidate1,
        candidate2,
        candidate3,
        candidate4,
        candidate5,
        candidate6,
        candidate7,
        candidate8,
        candidate9,
        candidate10,
        candidate11,
        candidate12,
        candidate13,
        candidate14,
        candidate15,
        candidate16,
        candidate17,
        candidate18,
        candidate19,
        candidate20,
        candidate21,
        candidate22,
        candidate23,
        candidate24,
        candidate25,
        candidate26,
        candidate27,
        candidate28,
        candidate29,
        candidate30,
        candidate31
    };
    
    // Adds candidates into candidate linked list
    for (int i = 0; i < SIZE; i++)
    {
        list.addCandidate(candidates[i]);
    }
    
    // Main Driver Program begins here...
    char userInput = ' ';
    
    while (userInput != 27)
    {
        cout << "Choose an option:\n"
                "1: Search for a candidate\n"
                "2: See total votes for a candidate\n"
                "3: See campus votes for a candidate\n"
                "4: View all candidates\n"
                "5: View winner of election\n"
                "6: View final election results\n"
                "esc: Exit\n";
        
        cout << "\nEnter your choice: ";
        cin >> userInput;
        
        int ssn, division;
        switch (userInput)
        {
            case '1':
                cout << "\nPlease enter the candidates SSN: ";
                cin >> ssn;
                cout << endl;
                list.searchCandidate(ssn);
                break;
            case '2':
                cout << "\nPlease enter the candidates SSN: ";
                cin >> ssn;
                cout << endl;
                list.printCandidateTotalVotes(ssn);
                break;
            case '3':
                cout << "\nPlease enter the candidates SSN: ";
                cin >> ssn;
                cout << "Please enter the divison number: ";
                cin >> division;
                cout << endl;
                list.printCandidateCampusVotes(ssn, division);
                break;
            case '4':
                cout << endl;
                list.printAllCandidates();
                break;
            case '5':
                cout << endl;
                cout << list.getWinner();
                cout << endl;
                break;
            case '6':
                cout << endl;
                list.printFinalResults(SIZE);
                break;
            case 27:
                cout << "\nGoodbye!\n";
                break;
            default:
                break;
        }
        cout << endl;
    }
    
    return 0;
}
