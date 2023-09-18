#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Introduzca un numero: ";
	cin >> n;
		
	for (int num = 2; num <= n; ++num) {
		bool primo = true;
		
		for (int i = 2; i < num; ++i) {
            if (num % i == 0) {
                primo = false;
                break;
			}
		}
		
		if (primo) {
			cout << num << " ";
		}
	}
	
	
}