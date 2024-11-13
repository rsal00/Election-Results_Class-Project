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
    CandidateList list;
    
    candidate1.setPersonInfo("John", "Doe", 123456789);
    candidate2.setPersonInfo("Ed", "Johnson", 648712038);
    candidate3.setPersonInfo("Derrick", "Johns", 385904578);
    
    candidate1.updateVotesByCampuses(2, 50);
    candidate2.updateVotesByCampuses(1, 20);
    candidate3.updateVotesByCampuses(3, 75);
    
    list.addCandidate(candidate2);
//    list.addCandidate(candidate1);
//    list.addCandidate(candidate3);
    
    cout << list.getWinner();
    
    return 0;
}
