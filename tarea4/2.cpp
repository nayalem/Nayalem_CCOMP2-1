#include <iostream>

using namespace std;

int main() {
	int limite = 4000000; 
	int suma = 0;
	int n1 = 1;
	int n2 = 2;
	
	while (n1 <= limite) {
		if (n1 % 2 == 0) {
			suma += n1;
		}
		
		int temp = n1 + n2;
		n1 = n2;
		n2 = temp;
	}
	
	cout << suma << endl;
}