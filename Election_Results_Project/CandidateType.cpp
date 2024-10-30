#include "CandidateType.h"
#include <iostream>

// Default Constructor sets member variables to 0
CandidateType::CandidateType() : totalNumOfVotes(0), campusVotes{0} {};

/*
 Member function that takes a campus number parameter
 and the number of votes by that campus.
 
 Stores the number of votes into the corresponding index of the campus
 in the campuses array and updates the total number of votes member variable.
*/
void CandidateType::updateVotesByCampuses(int campusNum, int numOfVotes)
{
    campusVotes[campusNum - 1] = numOfVotes;
    totalNumOfVotes += numOfVotes;
}

// Member function that returns the total number of votes of the candidate
int CandidateType::getTotalVotes() const { return totalNumOfVotes; }

// Member function that gets the votes of the candidate from a specific campus
int CandidateType::getVotesByCampus(int campusNum) const { return campusVotes[campusNum - 1]; }

// Member function that prints candidates personal information
void CandidateType::printCandidateInfo()
{
    printPersonalInfo();
}

// Member function that prints a candidates full name and the total votes among all campuses
void CandidateType::printCandidateTotalVotes()
{
    printName();
    std::cout << "  -> Total Votes (all campuses): " << totalNumOfVotes << std::endl;
}

// Member function that prints a candidates full name and the total votes by a specific campus
void CandidateType::printCandidateCampusVotes(int campusNum)
{
    PersonType::printName();
    std::cout << "  -> Campus " << campusNum << " total votes: " << campusVotes[campusNum - 1] << std::endl;
}

// Destructor
CandidateType::~CandidateType()
{
    // empty
}
