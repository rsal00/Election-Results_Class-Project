/*
    KDR Coders - Daniel Ruiz, Kun Fang, Ruben Salazar, Sean Zhou
    CMPR 121 - Fall 2024
    November 6, 2024
 
    Final Project
 
    Collaboration:
    Daniel Ruiz, Kun Fang, Sean Zhou
*/

#pragma once
#ifndef CANDIDATELIST_H
#define CANDIDATELIST_H

#include "Node.h"

class CandidateList : public Node
{
public:
    
    CandidateList();
    
    void addCandidate(const CandidateType& candidate);
    
    int getWinner() const;
    bool searchCandidate(int SSN) const;
    
    void printCandidateName(int SSN);
    void printAllCandidates();
    void printCandidateCampusVotes(int SSN, int division);
    void printCandidateTotalVotes(int SSN);
    void printFinalResults();
    void printr();
    void destroyList();
    
    ~CandidateList();
    
    CandidateList(const CandidateList &list);
    
    CandidateList& operator=(const CandidateList& other);
    
private:
    Node* first;
    Node* last;
    int count;
};

#endif
