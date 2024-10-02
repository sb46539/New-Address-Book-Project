#include "addressBookType.h"
#include <iostream>
#include <fstream>

addressBookType::addressBookType(int size) : maxSize(size), length(0) {}

void addressBookType::initEntry() {
    std::ifstream inFile("AddressBookData.txt");

    std::string firstName, lastName, address, city, state, phoneNumber, relationship;
    int month, day, year, zip;

    while (inFile >> firstName >> lastName >> month >> day >> year) {
        inFile.ignore();
        std::getline(inFile, address);
        std::getline(inFile, city);
        inFile >> state >> zip;
        inFile.ignore();
        std::getline(inFile, phoneNumber);
        std::getline(inFile, relationship);

        extPersonType newEntry(firstName, lastName, month, day, year, address, city, state, zip, phoneNumber, relationship);
        addEntry(newEntry);
    }

    inFile.close();
}

void addressBookType::addEntry(const extPersonType& newEntry) {
    if (length < maxSize) {
        addressList[length] = newEntry;
        length++;
    }
}

void addressBookType::findPerson(const std::string& lastName) const {
    for (int i = 0; i < length; i++) {
        if (addressList[i].getLastName() == lastName) {
            addressList[i].print();
            return;
        }
    }
    std::cout << "Not found." << std::endl;
}

void addressBookType::findBirthdays(int month) const {
    bool found = false;
    for (int i = 0; i < length; i++) {
        if (addressList[i].getBirthMonth() == month) {
            addressList[i].print();
            found = true;
        }
    }
    if (!found) {
        std::cout << "No birthdays found in this month." << std::endl;
    }
}

void addressBookType::findRelations(const std::string& relationship) const {
    bool found = false;
    for (int i = 0; i < length; i++) {
        if (addressList[i].getRelationship() == relationship) {
            addressList[i].print();
            found = true;
        }
    }
    if (!found) {
        std::cout << "No entries found with this relationship." << std::endl;
    }
}

void addressBookType::sortEntries() {
    for (int current = 1; current < length; current++) {
        int index = current;
        extPersonType temp = addressList[index];

        while (index > 0 && addressList[index - 1].getLastName() > temp.getLastName()) {
            addressList[index] = addressList[index - 1];
            index--;
        }
        addressList[index] = temp;
    }
}

void addressBookType::print() const {
    for (int i = 0; i < length; i++) {
        addressList[i].print();
    }
}
