#include <iostream>

using namespace std;

int main() {
	for (int a = 1; a < 1000; ++a) {
		for (int b = a + 1; b < 1000; ++b) {
			int c = 1000 - a - b;
			if (a * a + b * b == c * c) {
				cout << "El triplete pitagórico es: a=" << a << ", b=" << b << ", c=" << c << endl;
				cout << "El producto abc es: " << a * b * c << endl;
				
			}
		}
	}
	

}
