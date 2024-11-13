//
//  CandidateList.h
//  Election_Results_Project
//
//  Created by Ruben Salazar on 11/5/24.
//

#pragma once
#ifndef CANDIDATELIST_H
#define CANDIDATELIST_H

#include "Node.h"

class CandidateList : public Node
{
public:
    
    CandidateList();
    
    CandidateList(const CandidateList &list);
    
    CandidateList& operator=(const CandidateList& other);
    
    void addCandidate(const CandidateType& rhs);
    
    int getWinner();
    
    bool searchCandidate(int SSN);
    
    void printCandidateName(int SSN);
    
    void printAllCandidates();
    
    void printCandidateTotalVotes(int SSN);
    
    void destroyList();
    
    ~CandidateList();
    
private:
    Node* first;
    Node* last;
    int count;
};

#endif
