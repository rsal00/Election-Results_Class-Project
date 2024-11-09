//
//  CandidateList.cpp
//  Election_Results_Project
//
//  Created by Ruben Salazar on 11/5/24.
//

#include "CandidateList.h"

CandidateList::CandidateList()
{
    first = nullptr;
    last = nullptr;
    count = 0;
}

void CandidateList::addCandidate(const CandidateType &candidate)
{
    Node *newCandidate;
    Node *traverse;
    
    newCandidate = new Node;
    newCandidate->setCandidate(candidate);
    
    if (!first)
    {
        first = newCandidate;
    }
    else
    {
        traverse = first;
        
        while(traverse->getLink())
        {
            setLink(traverse);
        }
        
        last = traverse;
    }
}
