#pragma once
#include <string>
#include <iostream>



class addressType
{
private:
	std::string address;
	std::string city;
	std::string state;
	int zipcode;

public:
	addressType(std::string address = "", std::string city = "", std::string state = "xx", int zipcode = 10000); // default constructor
	// SETTERS
	void setAddress(std::string address);
	void setCity(std::string city);
	void setState(std::string state);
	void setZipcode(int zipcode);

	// GETTERS	q
	std::string getAddress();
	std::string getCity();
	std::string getState();
	int getZipcode();

	void print();
};