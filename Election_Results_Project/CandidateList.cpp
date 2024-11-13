//
//  CandidateList.cpp
//  Election_Results_Project
//
//  Created by Ruben Salazar on 11/5/24.
//

#include "CandidateList.h"
#include <iostream>

CandidateList::CandidateList()
{
    first = nullptr;
    last = nullptr;
    count = 0;
}

void CandidateList::addCandidate(const CandidateType &candidate)
{
    // Creating a new node
    Node* newCandidate = new Node;
    
    // Setting new node's candidate object to the passed argument candidate object
    newCandidate->setCandidate(candidate);
    
    // Setting new node link to nullptr
    newCandidate->setLink(nullptr);
    
    // If we are adding the first candidate, set first and last equal to the same node
    if (first == nullptr)
    {
        first = newCandidate;
        last = newCandidate;
    }
    // If we are adding a second or more candidate, set last to the new node and link
    else
    {
        last->setLink(newCandidate);
        last = newCandidate;
    }
    // Increment amount of candidates
    count++;
}

/**
 Creates a Node object and assigns it to the first node.
 Checks if the list if empty.
 
*/
int CandidateList::getWinner()
{
    // Creating a Node object and assigns it to the first node.
    Node* current = first;
    
    // Checks if the list if empty.
    if (current == nullptr)
    {
        std::cerr << "=> List is empty\n";
        return 0;
    }
    
    /**
     Creating a CandidateType object and assigning the current candidate to it
     and the candidates total votes into a variable
    */
    CandidateType winner = current->getCandidate();
    int most = winner.getTotalVotes();
    
    //While loop loops as long as current is not nullptr.
    while (current)
    {
        /**
         New CandidateType object assigned to the current candidate
         and its total votes into a variable.
        */
        CandidateType currentCandidate = current->getCandidate();
        int currentVotes = currentCandidate.getTotalVotes();
        
        /**
         If current amount of total votes is greater than most
         assign currentCandidate to winner and currentVotes to most
        */
        if (currentVotes > most)
        {
            winner = currentCandidate;
            most = currentVotes;
        }
        // Go to next node and repeat until node pointing to nullptr
        current = current->getLink();
    }
    // Return the SSN of winner candidate
    return winner.getSSN();
}

bool CandidateList::searchCandidate(int SSN)
{
    Node* current = first;
    
    if (current == nullptr)
    {
        std::cerr << "=> List is empty\n";
    }
    
    while (current)
    {
        // Creating a candidate(c)
        CandidateType c;
        
        // Assinging c to current candidate
        c = current->getCandidate();
        
        // If current candidate's SSN is equal to the passed argument SSN, return true
        if (c.getSSN() == SSN)
        {
            return true;
        }
        // If not, go to next node and check if we are in the last node
        else if (c.getSSN() != SSN)
        {
            current = current->getLink();
            
            // Checking if in the final node pointing to nullptr
            if (current == nullptr)
            {
                std::cout << "=> SSN is not in the list\n";
            }
        }
    }
    return false;
}

void CandidateList::printCandidateName(int SSN)
{
    Node* current = first;
    
    if (current == nullptr)
    {
        std::cerr << "=> List is empty\n";
    }
    
    while (current)
    {
        CandidateType c;
        c = current->getCandidate();
        if (c.getSSN() == SSN)
        {
            c.printName();
            current = nullptr;
        }
        else if (c.getSSN() != SSN)
        {
            current = current->getLink();
            
            if (current == nullptr)
            {
                std::cout << "=> SSN is not in the list\n";
            }
        }
    }
}

void CandidateList::destroyList()
{
    Node* current = first;
    while (first)
    {
        first = first->getLink();
        delete current;
        current = first;
    }
}

CandidateList::~CandidateList()
{
    destroyList();
}

// Copy Constructor - A(b)
CandidateList::CandidateList(const CandidateList& other)
{
    first = nullptr;
    last = nullptr;
    count = 0;
    
    Node* current = other.first;
    while (current)
    {
        addCandidate(other.getCandidate());
        current = current->getLink();
    }
}

// Copy assignment operator - a = b
CandidateList& CandidateList::operator=(const CandidateList& rhs)
{
    if (this == &rhs)
    {
        return *this;
    }
    
    destroyList();
    
    first = nullptr;
    last = nullptr;
    count = 0;
    
    Node* current = rhs.first;
    while (current)
    {
        addCandidate(current->getCandidate());
        current = current->getLink();
    }
    return *this;
}
