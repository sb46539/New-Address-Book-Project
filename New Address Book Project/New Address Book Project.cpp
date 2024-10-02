#include <iostream>
#include "addressBookType.h"

int main() {
    addressBookType myAddressBook(500);
    myAddressBook.initEntry();

    std::string testLastName = "Smith";
    int testMonth = 3;
    std::string testRelationship = "Friend";

    std::cout << "Last Name: " << testLastName << std::endl;
    myAddressBook.findPerson(testLastName);

    std::cout << "Birthdays by Month: " << testMonth << std::endl;
    myAddressBook.findBirthdays(testMonth);

    std::cout << "Relations: " << testRelationship << std::endl;
    myAddressBook.findRelations(testRelationship);

    std::cout << "All:" << std::endl;
    myAddressBook.print();

    return 0;
}
