#include "personType.h"


personType::personType(std::string fName, std::string lName) {
	firstName = fName;
	lastName = lName;
}



void personType::print() {
	std::cout << "First name: " << firstName << " Last name: " << lastName << std::endl;
}