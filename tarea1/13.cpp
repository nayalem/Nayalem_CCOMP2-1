#include <iostream>

using namespace std;

int main(){
    cout << "Ingrese su edad: ";
    int edad;
    cin >> edad;

    int mhrOriginal = 220 - edad;
    int mhrTanaka = 208 - 0.7 * edad;
    int mhrNes = 211 - 0.64 * edad;

    cout << "Ecuación Original: MHR = " << mhrOriginal << endl;
    cout << "Ecuación de Tanaka: MHR = " << mhrTanaka << endl;
    cout << "Ecuación de Nes et al.: MHR = " << mhrNes << endl;


    int minMHR =min(mhrOriginal,min(mhrTanaka, mhrNes));
    int maxMHR =max(mhrOriginal,max(mhrTanaka, mhrNes));


    cout << "Rango de Valores MHR: " << minMHR << " - " << maxMHR << endl;

}