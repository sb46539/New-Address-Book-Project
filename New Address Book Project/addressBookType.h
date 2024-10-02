#pragma once
#include "addressBookType.h"
#include "extPersonType.h"
#include "personType.h"
#include "dateType.h"
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
    void findPerson(const std::string& lastName);
    void findBirthdays(int month);
    void findRelations(const std::string& relationship);
    void sortEntries();
    void print();
};