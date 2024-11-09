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
    PersonType(const std::string &newfName, const std::string &newlName, int newSSN);
    
    // Setter / Mutator
    void setPersonInfo(const std::string &newfName, const std::string &newlName, int newSSN);
    
    // Getters / Accessors
    std::string getFirstName() const;
    std::string getLastName() const;
    int getSSN() const;
    
    // Print functions
    void printName();
    void printPersonalInfo();
    void printSSN();
    
    // Destructor
    ~PersonType();
    
private:
    std::string fName, lName;
    int SSN;
};

#endif
