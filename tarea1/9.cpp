#include <iostream>
using namespace std;
main(){
    int x;
    cout<<"Escriba un numero de 4 digitos: "; cin>>x;

    int digito4=x%10;
    int digito3= (x/10)%10;
    int digito2=(x/100)%10;
    int digito1=(x/1000)%10;

    cout<<digito4<<" "<<digito3<<" "<<digito2<<" "<<digito1<<endl;
}