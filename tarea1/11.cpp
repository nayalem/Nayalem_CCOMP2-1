#include <iostream>
using namespace std;

int main() {
    cout << "Ingrese su peso en libras: ";
    int pesoEnLibras;
    cin >> pesoEnLibras;

    cout << "Ingrese su altura en pulgadas: ";
    int alturaEnPulgadas;
    cin >> alturaEnPulgadas;

    int imc = (pesoEnLibras * 703) / (alturaEnPulgadas * alturaEnPulgadas);
    cout << "Su Índice de Masa Corporal (IMC) es: " << imc << endl;
    
    if (imc < 18) {
        cout << "Está bajo de peso." << endl;
    } else if (imc < 25) {
        cout << "Su peso es normal." << endl;
    } else if (imc < 30) {
        cout << "Tiene sobrepeso." << endl;
    } else {
        cout << "Tiene obesidad." << endl;
    }

}
