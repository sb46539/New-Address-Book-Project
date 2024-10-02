#pragma once
#include "extPersonType.h"
#include <string>

class addressBookType {
private:
    extPersonType addressList[500];
    int length;
    int maxSize;

public:
    addressBookType(int maxSize = 500);

    void initEntry();
    void addEntry(extPersonType newEntry);
    void findPerson(std::string lastName);
    void findBirthdays(int month);
    void findRelations(std::string relationship);
    void sortEntries();
    void print();
};
