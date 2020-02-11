#include <iostream>
#include <fstream>

using namespace std;


struct Personaa{
    char lastname[16];
    char fisrtname[16];
    char address[16];
    char city[16];
    char state[3];
    char zipcode[10];
    //77 bytes
};

class Person{
    public:
        char LastName[16];
        char FirstName[16];
        char Address[16];
        char City[16];
        char State[3];
        char ZipCode[10];
        Person();
        void Print();

        //para read reg fijo
        ifstream readfijo;
        void readFile();
        void writeFile();
};
