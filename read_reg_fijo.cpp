#include "person.h"
#include <fstream>

using namespace std;

void Person::writeFile(){
    ofstream personasOut("personas.dat",ios::app);

    if(!personasOut){
        cout<<"Personas archivo no encontrado!!";
        return;
    }

    Personaa x;
    int numero=0;
    int temp=0;
    cout<<"**********ingreso de personas!!**********\n\n";

        char LastName[16];
        char FirstName[16];
        char Address[16];
        char City[16];
        char State[3];
        char ZipCode[10];


    while(temp==0){
        cout<<"Ingrese primer nombre: \n";
        cin>>x.fisrtname;
        cout<<"Ingrese apellido: \n";
        cin>>x.lastname;
        cout<<"Ingrese direccion: \n";
        cin>>x.address;
        cout<<"Ingrese cuidad: \n";
        cin>>x.city;
        cout<<"ingrese Estado: \n";
        cin>>x.state;
        cout<<"ingrese codigo zip: \n";
        cin>>x.zipcode;

        personasOut<<x.fisrtname<<" "<<x.lastname<<" "<<x.address<<" "<<x.city<<" "<<x.state<<" "<<x.zipcode<<"\n";

        cout<<"desea ingresar mas personas? 0.si | 1.no\n\n";
        cin>>temp;

        
    }

    personasOut.close();
}

void Person::readFile(){
    ifstream personIn("personas.dat",ios::in);

    if(!personIn){
        cout<<"error al abrir el archivo!!!";
        return;
    }

        char LastName[16];
        char FirstName[16];
        char Address[16];
        char City[16];
        char State[3];
        char ZipCode[10];

    cout<<"**********************Consulta de personas**********************\n\n";
    while(personIn>>FirstName>>LastName>>Address>>City>>State>>ZipCode){

        cout<<FirstName<<" "<<LastName<<" "<<Address<<" "<<City<<" "<<State<<" "<<ZipCode<<"\n";

    }

    personIn.close();
}
