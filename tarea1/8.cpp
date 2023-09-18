#include <iostream>
using namespace std;
main(){
    char caracter;
    cout<<"Introduce un caracter: "; cin>>caracter;
     int entero=static_cast<int>(caracter);
     cout<<"El equivalente entero de "<<caracter<<" es: "<<entero<<endl;

}