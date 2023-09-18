#include <iostream>
using namespace std;

int main() {
    int numero1= 1;
    int numero2= 1;
    int n;
    cout<<"Introduzca un número: " ;
    cin>>n;
    for(int i=0; i<n ;i++){
        cout<<numero1<<" ";

        int numsiguiente= numero1 + numero2;
        numero1=numero2;
        numero2=numsiguiente;
    }
}