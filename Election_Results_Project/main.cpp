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
using namespace std;

int main()
{
    CandidateType candidate1;
    CandidateType candidate2;
    
    candidate1.setPersonInfo("John", "Doe", 123456789);
    
    candidate2.setPersonInfo("Ed", "Williams", 368278654);
    
    candidate1.updateVotesByCampuses(1, 5);
    
    candidate2.updateVotesByCampuses(4, 40);
    
    candidate1.updateVotesByCampuses(2, 6);
    
    cout << candidate1.getVotesByCampus(2) << endl;
    
    return 0;
}
