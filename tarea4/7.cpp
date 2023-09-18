
#include <iostream>
using namespace std;

int main() {
    int posicion = 6; 
    int numprimos = 0; 
    int num = 2; 

    while (true) {
        bool esPrimo = true;


        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                esPrimo = false; 
                break;
            }
        }

        if (esPrimo) {
            numprimos++;
            if (numprimos == posicion) {
                cout << "El número primo en la posición " << posicion << " es: " << num << endl;
                break; 
            }
        }

        num++;
    }

}
