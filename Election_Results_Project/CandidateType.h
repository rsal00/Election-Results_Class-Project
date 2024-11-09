#pragma once
#ifndef CANDIDATETYPE_H
#define CANDIDATETYPE_H

#include "PersonType.h"

const int NUM_OF_CAMPUSES = 4;

class CandidateType : public PersonType
{
public:
    
    // Default Constructor
    CandidateType();
    
    // Update function
    void updateVotesByCampuses(int campusNum, int numOfVotes);
    
    // Getter functions
    int getTotalVotes() const;
    int getVotesByCampus(int campusNum) const;
    
    // Print functions
    void printCandidateInfo();
    void printCandidateTotalVotes();
    void printCandidateCampusVotes(int campusNum);
    
    // Destructor
    ~CandidateType();
    
public:
    int totalNumOfVotes;
    int campusVotes[NUM_OF_CAMPUSES];
};

#endif
