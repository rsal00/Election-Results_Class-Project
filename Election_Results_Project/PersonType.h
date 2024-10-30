#pragma once
#ifndef PERSONTYPE_H
#define PERSONTYPE_H

#include <string>

class PersonType
{
public:
    
    // Default Constructor
    PersonType();
    
    // Overloaded Constructor
    PersonType(const std::string &, const std::string &, int);
    
    // Setter / Mutator
    void setPersonInfo(const std::string &, const std::string &, int);
    
    // Getters / Accessors
    std::string getFirstName() const;
    std::string getLastName() const;
    int getSSN() const;
    
    // Print functions
    void printName();
    virtual void printPersonalInfo();
    void printSSN();
    
    // Destructor
    ~PersonType();
    
private:
    std::string fName, lName;
    int SSN;
};

#endif

