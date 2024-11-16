/*
    KDR Coders - Daniel Ruiz, Kun Fang, Ruben Salazar, Sean Zhou
    CMPR 121 - Fall 2024
    October 15, 2024
 
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
    
    CandidateList(const CandidateList &list);
    
    CandidateList& operator=(const CandidateList& other);
    
    void addCandidate(const CandidateType& candidate);
    
    int getWinner();
    
    bool searchCandidate(int SSN);
    
    void printCandidateName(int SSN);
    
    void printAllCandidates();
    
    void printCandidateCampusVotes(int SSN, int division);
    
    void printCandidateTotalVotes(int SSN);
    
    void printFinalResults(int SIZE);
    
    void destroyList();
    
    ~CandidateList();
    
private:
    Node* first;
    Node* last;
    int count;
};

#endif
