// IMPLEMENTATION FILE

#include "extPersonType.h"
#include "personType.h"
#include <iostream>

// Constructor
extPersonType::extPersonType(std::string getFirstName, std::string getLastName, int month, int day, int year,
    std::string addr, std::string city, std::string state, int zip,
    std::string pNumber, std::string rShip)
    : personType(getFirstName, getLastName),
    phoneNumber(pNumber),
    relationship(rShip),
    birthMonth(month),
    birthdate(day, month, year),
    address(addr, city, state, zip)
{ }

void extPersonType::print() {
    std::cout << "First name: " << getFirstName()
        << ", Last name: " << getLastName()
        << ", Month: " << birthMonth
        << ", Day: " << birthdate.getDay()
        << ", Year: " << birthdate.getYear()
        << ", ";
    address.print();
}