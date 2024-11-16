/*
    KDR Coders - Daniel Ruiz, Kun Fang, Ruben Salazar, Sean Zhou
    CMPR 121 - Fall 2024
    October 15, 2024
 
    Final Project
 
    Collaboration:
    Daniel Ruiz, Kun Fang, Sean Zhou
*/

#pragma once
#ifndef NODE_H
#define NODE_H

#include "CandidateType.h"

class Node : public CandidateType
{
public:
    
    Node() : link(nullptr) {}
    
    Node(const CandidateType& votes, Node* theLink)
        : candidate(votes), link(theLink) {}
    
    Node* getLink() const { return link; }
    
    CandidateType getCandidate() const { return candidate; }
    
    void setCandidate(const CandidateType& votes) { candidate = votes; }
    
    void setLink(Node* theLink) { link = theLink; }
    
    ~Node() {}
    
private:
    CandidateType candidate;
    Node* link;     //pointer that points to next node
};

#endif
