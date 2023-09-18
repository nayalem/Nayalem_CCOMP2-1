#include <iostream>
using namespace std;

int main() {
	long limite = 2000000;
	long long suma = 0; // Cambia a long long para evitar desbordamientos
	
	for (int num = 2; num <= limite; ++num) {
		bool primo = true;
		
		for (int i = 2; i * i <= num; ++i) { // Optimización en la comprobación de primos
			if (num % i == 0) {
				primo = false;
				break;
			}
		}
		
		if (primo) {
			suma += num; // Incrementa la suma por el valor del número primo
		}
	}
	
	cout << suma;
	
	return 0;
}
