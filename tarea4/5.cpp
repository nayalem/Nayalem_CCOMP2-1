#include <iostream>
using namespace std;

int main() {
    int resultado = 1; 

 
    for (int i = 2; i <= 20; i++) {
        int num1 = resultado;
        int num2 = i;

     
        while (num1 % num2 != 0) {
            num1 += resultado; 
        }

        resultado = num1; 
    }

    cout << "El número más pequeño divisible por todos los números desde 1 hasta 20 es: " << resultado << endl;

    
}
