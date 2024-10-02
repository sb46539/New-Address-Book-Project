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
    void addEntry(const extPersonType& newEntry);
    void findPerson(const std::string& lastName) const;
    void findBirthdays(int month) const;
    void findRelations(const std::string& relationship) const;
    void sortEntries();
    void print() const;
};
