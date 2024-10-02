#pragma once
#include <string>
#include <iostream>
class personType
{
private:
	std::string firstName;
	std::string lastName;

public:
	// Setters
	personType(std::string firstName, std::string lastName, std::string addr, std::string city, std::string state, int zip);

	void setFirstName(std::string fName) {
		firstName = fName;
	}
	void setLastName(std::string lName) {
		lastName = lName;
	}

	// Getters
	std::string getFirstName() {
		return firstName;
	}
	std::string getLastName() {
		return lastName;
	}
	void print();
	personType(std::string fName = "", std::string lName = "");

};

