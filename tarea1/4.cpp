#include <iostream>
using namespace std;
main(){
    int num1;
    int num2;
    int num3;
    int num4;
    int num5;
    cout<<"Ecriba un número: "; cin>>num1;
    cout<<"Ecriba un número: "; cin>>num2;
    cout<<"Ecriba un número: "; cin>>num3;
    cout<<"Ecriba un número: "; cin>>num4;
    cout<<"Ecriba un número: "; cin>>num5;

    int menor=num1;
    if(num2<menor)
    menor=num2;
    if(num3<menor)
    menor=num3;
    if(num4<menor)
    menor=num4;
    if(num5<menor)
    menor=num5;

    int mayor=num1;
    if(num2>mayor)
    mayor=num2;
    if(num3>mayor)
    mayor=num3;
    if(num4>mayor)
    mayor=num4;
    if(num5>mayor)
    mayor=num5;

    cout<<"El numero menor es: "<<menor<<endl;
    cout<<"El numero mayor es: "<<mayor<<endl;

    

}