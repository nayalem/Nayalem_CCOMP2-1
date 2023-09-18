#include <iostream>

using namespace std;
int main(){
    int x= 100;
    int sumacuadrados =0;
    int suma=0;
    for (int i=1; i<=x;i++){
        int cuadrado = i*i;
        sumacuadrados +=cuadrado;
        suma += i;
    }
    int cuadradosuma = suma * suma;
    int diferencia= cuadradosuma - sumacuadrados;
    cout<<"La suma de los cuadrados es: "<<sumacuadrados<<endl;
    cout<<"El cuadrado de la suma es: "<<cuadradosuma<<endl;
    cout<<"La diferencia es: "<<diferencia;
}