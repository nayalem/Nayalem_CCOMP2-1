#include <iostream>
using namespace std;

int main() {
	long limite = 2000000;
	long long suma = 0; 
	
	for (int num = 2; num <= limite; ++num) {
		bool primo = true;
		
		for (int i = 2; i * i <= num; ++i) { 
			if (num % i == 0) {
				primo = false;
				break;
			}
		}
		
		if (primo) {
			suma += num; 
		}
	}
	
	cout << suma;
	
	return 0;
}
