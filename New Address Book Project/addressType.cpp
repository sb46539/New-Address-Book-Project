#include "addressType.h"
#include <iostream>

// Define constructor
addressType::addressType(std::string addr, std::string cty, std::string st, int zip)
    : address(addr), city(cty), state(st), zipcode(zip) {}


void addressType::setAddress(std::string addr) {
    address = addr;
}

void addressType::setCity(std::string cty) {
    city = cty;
}

void addressType::setState(std::string st) {
    if (st.length() == 2) {
        state = st;
    }
    else
    {
        state = "XX";
    }
}

void addressType::setZipcode(int zip) {
    if (zip >= 11111 && zip <= 99999) {
        zipcode = zip;
    }
    else
    {
        zipcode = 10000;
    }
}

void addressType::print() {
    std::cout << "Address: " << address << ", City: " << city
        << ", State: " << state << ", Zipcode: " << zipcode << std::endl;
}