#include <iostream>
#include <math.h>
using namespace std;
int main(){
int x;
int pi=3.14159;
cout<<"Introduce el radio de la circunferencia: "; 
cin>>x;
int diametro= x*2;
int area= pow(x,2)*pi;
int circu=2*pi*x;
cout<<"El diametro de la circunferencia es: "<<diametro<<endl;
cout<<"El area de la circunferencia es: "<<area<<endl;
cout<<"La circunferencia es: "<<circu<<endl;
return 0;
}
