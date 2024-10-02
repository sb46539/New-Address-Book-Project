#pragma once
#include "personType.h"
#include "dateType.h"
class extPersonType : public personType {
private:
    std::string phoneNumber;
    std::string relationship;
    int birthMonth;
    dateType birthdate;
    addressType address;


public:

    // CONSTRUCTOR
    extPersonType(std::string getFirstName, std::string getLastName, int month = 1, int day = 1, int year = 1900, std::string addr = "", std::string city = "", std::string state = "", int zip = 0,
        std::string pNumber = "", std::string rShip = "Friend");
    extPersonType()
        : personType("", ""), phoneNumber(""), relationship("Friend"), birthMonth(1), birthdate(1, 1, 1900) {}

    // SETTERS
    void setPhoneNumber(std::string pNumber) {
        phoneNumber = pNumber;
    }
    void setRelationship(std::string rShip) {
        relationship = rShip;
    }

    // GETTERS
    std::string getPhoneNumber() {
        return phoneNumber;
    }
    std::string getRelationship() {
        return relationship;
    }

    int getBirthMonth() {
        return birthdate.getMonth();
    }

    void print();
};

