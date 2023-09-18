#include <iostream>
using namespace std;

int main() {
	int suma= 0;
    int n;
	cout << "Introduzca un numero: ";
	cin >> n;
		
	for (int num = 1; num < n; ++num) {
        if (num % 3 == 0 || num % 5 == 0){
            suma+=num;   
        } 
    }
    cout<<suma;
}