#include <iostream>
#include <string>
#include "PersonType.h"

// Default Constructor, only SSN is explicitly initialized as string member variables are set empty by default
PersonType::PersonType() { SSN = 0; }

// Overloaded Constructor sets arguments to member variables
PersonType::PersonType(const std::string &newfName, const std::string &newlName, int newSSN)
    { fName = newfName; lName = newlName; SSN = newSSN; }

// Member function that sets a person info(member variables of the PersonType class)
void PersonType::setPersonInfo(const std::string &newfName, const std::string &newlName, int newSSN)
    { fName = newfName; lName = newlName; SSN = newSSN; }

// Member function that returns the first name
std::string PersonType::getFirstName() const { return fName; }

// Member function that returns the last name
std::string PersonType::getLastName() const { return lName; }

// Member function that returns SSN
int PersonType::getSSN() const { return SSN; }

// Member function that prints the person's full name in a formatted way ( LNAME, FNAME )
void PersonType::printName()
{
    std::cout << lName << ", " << fName << std::endl;
}

// Member function that prints SSN in a formatted way and the person's full name
void PersonType::printPersonalInfo()
{
    std::string strSSN = std::to_string(SSN);
    
    for (int i = 0; i < 3; i++)
    {
        std::cout << strSSN[i];
    }
    
    std::cout << "-";
    
    for (int i = 3; i < 5; i++)
    {
        std::cout << strSSN[i];
    }
    
    std::cout << "-";
    
    for (int i = 5; i < 10; i++)
    {
        std::cout << strSSN[i];
    }
    
    std::cout << " " << lName << ", " << fName << std::endl;
}

// Member function that prints the SSN of a person in a formatted way ( ###-##-#### )
void PersonType::printSSN()
{
    std::string strSSN = std::to_string(SSN);
    
    for (int i = 0; i < 3; i++)
    {
        std::cout << strSSN[i];
    }
    
    std::cout << "-";
    
    for (int i = 3; i < 5; i++)
    {
        std::cout << strSSN[i];
    }
    
    std::cout << "-";
    
    for (int i = 5; i < 9; i++)
    {
        std::cout << strSSN[i];
    }
    
    std::cout << std::endl;
}

// Destructor
PersonType::~PersonType()
{
    // empty
}

