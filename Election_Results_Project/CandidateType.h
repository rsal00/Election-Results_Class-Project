#pragma once
#ifndef CANDIDATETYPE_H
#define CANDIDATETYPE_H

#include "PersonType.h"

const int NUM_OF_CAMPUSES = 4;

class CandidateType : public PersonType
{
public:
    
    CandidateType();
    
    void updateVotesByCampuses(int campusNum, int numOfVotes);
    
    int getTotalVotes() const;
    
    int getVotesByCampus(int campusNum) const;
    
    void printCandidateInfo();
    
    void printName() override;
    
    void printCandidateTotalVotes();
    
    void printCandidateCampusVotes(int campusNum);
    
    ~CandidateType();
    
public:
    int totalNumOfVotes;
    int campuses[NUM_OF_CAMPUSES];
};

#endif
