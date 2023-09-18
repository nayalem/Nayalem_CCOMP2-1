#include <iostream>
using namespace std;
main(){
    int num1;
    int num2;
    int num3;
    cout<<"Ingrese el primer numero: "; cin>>num1;
    cout<<"Ingrese el segundo numero: "; cin>>num2;
    cout<<"Ingrese el tercer numero: "; cin>>num3;
    if (num2%num1==0 && num2%num3==0)
    cout<<num1<<" y "<< num3<<" son factores del segundo numero, "<<num2<<endl;
    else{
        cout<<num1 <<" y "<< num3<<" no son factores del segundo numero, "<<num2<<endl;
    }
}