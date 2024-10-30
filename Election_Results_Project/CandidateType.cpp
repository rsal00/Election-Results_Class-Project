#include "CandidateType.h"
#include <iostream>

CandidateType::CandidateType()
{
    totalNumOfVotes = 0;
    campuses[NUM_OF_CAMPUSES] = {0};
}

void CandidateType::updateVotesByCampuses(int campusNum, int numOfVotes)
{
    campuses[campusNum - 1] = numOfVotes;
}

int CandidateType::getTotalVotes() const
{
    return totalNumOfVotes;
}

int CandidateType::getVotesByCampus(int campusNum) const
{
    return campuses[campusNum];
}

void CandidateType::printCandidateInfo()
{
    
}

void CandidateType::printName()
{
    PersonType::printName();
}

void CandidateType::printCandidateTotalVotes()
{
    printName();
    std::cout << "  -> Total Votes (all campuses): " << totalNumOfVotes << std::endl;
}

void CandidateType::printCandidateCampusVotes(int campusNum)
{
    PersonType::printName();
    std::cout << "  -> Campus " << (campusNum + 1) << ": " << campuses[campusNum] << std::endl;
}

CandidateType::~CandidateType()
{
    // empty
}
