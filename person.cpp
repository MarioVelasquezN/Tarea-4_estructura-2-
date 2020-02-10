#include "person.h";
#include <iostream>
using namespace std;

void Person::Print(){
    cout << "Last Name '" << LastName << "'\n"
    << "First Name '" << FirstName << "'\n"
    << "Address '" << Address << "'\n"
    << "City '" << City << "'\n"
    << "State '" << State << "'\n"
    << "Zip Code '" << ZipCode << "'\n"
    << flush;
}

Person::Person(){
    LastName[0]=0;
    FirstName[0]=0;
    Address[0]=0;
    City[0]=0;
    State[0]=0;
    ZipCode[0]=0;
}

//hacer un struct, usar la clase de persona//
//struct encapsular, cuando le demos print imprimamos el struct.
//