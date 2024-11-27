/*
    KDR Coders - Daniel Ruiz, Kun Fang, Ruben Salazar, Sean Zhou
    CMPR 121 - Fall 2024
    November 6, 2024
 
    Final Project
 
    Collaboration:
    Daniel Ruiz, Kun Fang, Sean Zhou
*/

#include "CandidateList.h"
#include <iostream>
#include <iomanip>

CandidateList::CandidateList() : first(nullptr), last(nullptr), count(0) {}

// Adds parameter of CandidateType object to list
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
int CandidateList::getWinner() const
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

// Searches through list comparing SSN and returning true if found
bool CandidateList::searchCandidate(int SSN) const
{
    // Creating a node to hold current position in list
    Node* current = first;
    
    // If the list is empty, output error message
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
            // return name to find who winner candidate is by name
            return true;
        }
        // If not, go to next node and check if we are in the last node
        else if (c.getSSN() != SSN)
        {
            current = current->getLink();
            
            // Checking if in the final node pointing to nullptr
            if (!current)
            {
                std::cout << "=> SSN is not in the list\n";
                return false;
            }
        }
    }
    return false;
}

// Searches through list comparing SSN and prints the name of the candidate
void CandidateList::printCandidateName(int SSN)
{
    // Creating a node to hold current position in list
    Node* current = first;
    
    // Checks if list is empty
    if (!current)
    {
        std::cerr << "=> List is empty\n";
    }
    
    // Loops through list
    while (current)
    {
        // Creating CandidateType object holding current candidate
        CandidateType c;
        c = current->getCandidate();
        
        // If the SSN's match, print name
        if (c.getSSN() == SSN)
        {
            c.printName();
            current = nullptr;
        }
        // If SSN's do not match, go to the next node
        else if (c.getSSN() != SSN)
        {
            current = current->getLink();
            
            // If the next node is nullptr, we have traversed the entire list so candidate is not inside it
            if (!current)
            {
                std::cout << "=> SSN is not in the list\n";
            }
        }
    }
}

// Prints every candidate in the list
void CandidateList::printAllCandidates()
{
    // Creating a node to hold current position in list
    Node* current = first;
    
    // Checks if list is empty
    if (!current)
    {
        std::cerr << "=> List is empty\n";
    }
    else
    {
        // Formatting the header line
        std::cout << std::left << std::setw(14) << "SSN" << "Name\n";
        std::cout << "----------------------------------\n";
        
        // Go through list printing every candidates information
        while (current)
        {
            // Candidate type object holding the current candidate
            CandidateType c;
            c = current->getCandidate();
            
            // Printing the current the candidate's information
            c.printCandidateInfo();
            
            // Goes to next node
            current = current->getLink();
        }
    }
}

// Prints a candidate's votes based on a specific divison/campus
void CandidateList::printCandidateCampusVotes(int SSN, int division)
{
    // Creating a node to hold current position in list
    Node* current = first;
    
    // Checks if list is empty
    if (!current)
    {
        std::cerr << "=> List is empty\n";
    }
    
    // Loops through entire list
    while (current)
    {
        // CandidateType object holding the current candidate
        CandidateType c;
        c = current->getCandidate();
        
        // If SSN's match, print candidate votes by a specific division/campus
        if (c.getSSN() == SSN)
        {
            c.printCandidateCampusVotes(division);
            current = nullptr;
        }
        // If SSN's do not match, go to next node
        else if (c.getSSN() != SSN)
        {
            current = current->getLink();
            
            // If next node is nullptr, SSN is not in the list
            if (!current)
            {
                std::cout << "=> SSN is not in the list\n";
            }
        }
    }
}

// Prints a candidates total votes
void CandidateList::printCandidateTotalVotes(int SSN)
{
    // Creating a node to hold current position in list
    Node* current = first;
    
    // Checks if list is empty
    if (!current)
    {
        std::cerr << "=> List is empty\n";
    }
    
    // Goes through entire list
    while (current)
    {
        // CandidateType object holding current candidate
        CandidateType c;
        c = current->getCandidate();
        
        // If SSN's match, print the candidates total votes accumulated
        if (c.getSSN() == SSN)
        {
            c.printCandidateTotalVotes();
            current = nullptr;
        }
        // If SSN's do not match, go to next node
        else if (c.getSSN() != SSN)
        {
            current = current->getLink();
            
            // If next node is nullptr, SSN is not in the list
            if (!current)
            {
                std::cout << "=> SSN is not in the list\n";
            }
        }
    }
}

// Sorts the list based on who had the most votes and prints the list in order
void CandidateList::printFinalResults()
{
    // CandidateType objects of winner and temporary
    CandidateType temp;
    
    // Algorithm sorting the candidates by most votes
    for (Node* current = first; current != nullptr; current = current->getLink())
    {
        for (Node* ahead = current->getLink(); ahead != nullptr; ahead = ahead->getLink())
        {
            if (current->getCandidate().getTotalVotes() < ahead->getCandidate().getTotalVotes())
            {
                temp = current->getCandidate();
                current->setCandidate(ahead->getCandidate());
                ahead->setCandidate(temp);
            }
        }
    }
    
    // Formatting header line
    std::cout << std::right << std::setw(25) << "FINAL RESULTS\n";
    std::cout << "---------------------------------------\n";
    std::cout << std::right << std::setw(4) << "No." << std::setw(12) << "First Name";
    std::cout << std::setw(12) << "Last Name" << std::right << std::setw(10) << "Votes\n";
    std::cout << "---------------------------------------\n";
    
    int i = 0;
    // Loop that displays final results of each candidate
    for (Node* current = first; current != nullptr; current = current->getLink())
    {
        CandidateType cand = current->getCandidate();
        std::cout << std::right << std::setw(2) << (i + 1) << "." << std::setw(12) << cand.getFirstName();
        std::cout << std::setw(12) << cand.getLastName();
        std::cout << std::right << std::setw(10) << cand.getTotalVotes();
        std::cout << std::endl;
        i++;
    }
}

// Destroying the list
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

// Destructor calling destoryList
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
