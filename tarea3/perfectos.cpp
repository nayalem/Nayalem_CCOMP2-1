#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;

    for (int per = 1; per <= n; per++) {
        int divisores = 0;

        for (int i = 1; i <= per / 2; i++) {
            if (per % i == 0) {
                divisores += i;
            }
        }

        if (divisores == per) {
            cout << per << " ";
        }
    }
}
