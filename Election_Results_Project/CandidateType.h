#pragma once
#ifndef CANDIDATETYPE_H
#define CANDIDATETYPE_H

#include "PersonType.h"

int NUM_OF_CAMPUSES;

class CandidateType : public PersonType
{
public:
    
    CandidateType();
    
    void updateVotesByCampuses(int, int);
    
    int getTotalVotes();
    
    int getVotesByCampus(int);
    
private:
    int totalNumOfVotes;
    int campuses[NUM_OF_CAMPUSES];
};

#endif
