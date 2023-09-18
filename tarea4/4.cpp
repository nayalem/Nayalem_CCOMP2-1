#include <iostream>
using namespace std;

int main(){

    int palindromogrande = 0;

    for(int num1 = 999; num1 >= 100; num1--){
        for(int num2= 999 ;num2 >= 100; num2--){
            int producto = num1*num2;
            int numinvertido = 0;
            int original = producto;

            while( producto > 0){
                int digito =  producto % 10;
                numinvertido = numinvertido * 10 + digito;
                producto /= 10;
            }
            if (original == numinvertido && original > palindromogrande){
                palindromogrande = original;
            }
        }

    }
    cout<<palindromogrande;
}