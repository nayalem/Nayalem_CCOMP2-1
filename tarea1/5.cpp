#include <iostream>
using namespace std;
main(){
    int x;
    int y;
    cout<<"Escribe el primer número: "; cin>>x;
    cout<<"Escriba el segundo número: "; cin>>y;

    int suma=x+y;
    if( (x+ y) %2==0)
    cout<<"La suma es par"<<endl;
    if( (x+y)%2==1)
    cout<<"La suma es impar"<<endl;
}