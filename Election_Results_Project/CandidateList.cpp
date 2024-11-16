/*
    KDR Coders - Daniel Ruiz, Kun Fang, Ruben Salazar, Sean Zhou
    CMPR 121 - Fall 2024
    October 15, 2024
 
    Final Project
 
    Collaboration:
    Daniel Ruiz, Kun Fang, Sean Zhou
*/

#include "CandidateList.h"
#include <iostream>
#include <iomanip>

CandidateList::CandidateList() : first(nullptr), last(nullptr), count(0) {}

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

// Traverses the list and gets the candidate with the most votes
int CandidateList::getWinner()
{
    // Creating a Node object and assigns it to the first node.
    Node* current = first;
    
    // Checks if the list if empty.
    if (!current)
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
    
    if (!current)
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
            std::cout << "Candidate Found!\n" << "Candidate Name: ";
            c.printName(); // return name to find who winner candidate is by name
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
    
    if (!current)
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

void CandidateList::printAllCandidates()
{
    Node* current = first;
    
    if (!current)
    {
        std::cerr << "=> List is empty\n";
    }
    
    std::cout << std::left << std::setw(14) << "SSN" << "Name\n";
    std::cout << "----------------------------------\n";
    while (current)
    {
        CandidateType c;
        c = current->getCandidate();
        
        c.printCandidateInfo();
        
        current = current->getLink();
    }
}

void CandidateList::printCandidateCampusVotes(int SSN, int division)
{
    Node* current = first;
    
    if (!current)
    {
        std::cerr << "=> List is empty\n";
    }
    
    while (current)
    {
        CandidateType c;
        c = current->getCandidate();
        
        if (c.getSSN() == SSN)
        {
            std::cout << c.getFirstName() << " " << c.getLastName() << "'s Divsion ";
            std::cout << division << " Votes: " << c.getVotesByCampus(division) << std::endl;
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

void CandidateList::printCandidateTotalVotes(int SSN)
{
    Node* current = first;
    
    if (!current)
    {
        std::cerr << "=> List is empty\n";
    }
    
    while (current)
    {
        CandidateType c;
        c = current->getCandidate();
        
        if (c.getSSN() == SSN)
        {
            std::cout << c.getFirstName() << " " << c.getLastName() << "'s Total ";
            std::cout << "Votes: " << c.getTotalVotes() << std::endl;
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

void CandidateList::printFinalResults(int SIZE)
{
    Node* current = first;
    
    CandidateType winner, temp;
    winner = current->getCandidate();
    
    //int mostVotes = winner.getTotalVotes();
    
    CandidateType resultsInOrder[SIZE];
    
    for (int i = 0; i < SIZE; i++)
    {
        resultsInOrder[i] = current->getCandidate();
        current = current->getLink();
    }
    
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = i; j < SIZE; j++)
        {
            if (resultsInOrder[i].getTotalVotes() < resultsInOrder[j+1].getTotalVotes())
            {
                temp = resultsInOrder[i];
                resultsInOrder[i] = resultsInOrder[j+1];
                resultsInOrder[j+1] = temp;
            }
        }
    }
//    int inc = 0;
//    while (current)
//    {
//        CandidateType currentCandidate = current->getCandidate();
//        int currentVotes = currentCandidate.getTotalVotes();
//        CandidateType temp;
        
//        for (int i = 0; i < 4; i++)
//        {
//            for (int j = i; j < 4; j++)
//            {
//                if (resultsInOrder[i].getTotalVotes() < resultsInOrder[j+1].getTotalVotes())
//                {
//                    winner = currentCandidate;
//                    mostVotes = currentVotes;
//                    temp = resultsInOrder[i];
//                    resultsInOrder[i] = resultsInOrder[j+1];
//                    resultsInOrder[i+1] = temp;
//                }
//            }
//        }
        
//        if (currentVotes > mostVotes)
//        {
//            winner = currentCandidate;
//            mostVotes = currentVotes;
//            resultsInOrder[inc] = winner;
//        }
//        resultsInOrder[inc] = currentCandidate;
//        inc++;
        //current = current->getLink();
    //}
    std::cout << std::right << std::setw(25) << "FINAL RESULTS\n";
    std::cout << "---------------------------------------\n";
    
    std::cout << std::right << std::setw(4) << "No." << std::setw(12) << "First Name";
    std::cout << std::setw(12) << "Last Name" << std::right << std::setw(10) << "Votes\n";
    std::cout << "---------------------------------------\n";
    
    for (int i = 0; i < SIZE; i++)
    {
        std::cout << std::right << std::setw(2) << (i + 1) << "." << std::setw(12) << resultsInOrder[i].getFirstName();
        std::cout << std::setw(12) << resultsInOrder[i].getLastName();
        std::cout << std::right << std::setw(10) << resultsInOrder[i].getTotalVotes();
        std::cout << std::endl;
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
