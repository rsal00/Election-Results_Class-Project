/*
    KDR Coders - Daniel Ruiz, Kun Fang, Ruben Salazar
    CMPR 121 - Fall 2024
    October 15, 2024
 
    Final Project
 
    Collaboration:
    Daniel Ruiz, Kun Fang
*/

#include <iostream>
#include "PersonType.h"
#include "CandidateType.h"
using namespace std;

int main()
{
    
    CandidateType candidate1;
    
    candidate1.setPersonInfo("John", "Doe", 123456789);
    
    candidate1.printPersonalInfo();
    
    return 0;
}
