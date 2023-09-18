#include <iostream>

using namespace std;

int main() {
    cout << "Ingrese la cantidad total de millas conducidas por día: ";
    int millas;
    cin >> millas;

    cout << "Ingrese el costo por galón de gasolina: ";
    int costoPorGalón;
    cin >> costoPorGalón;

    cout << "Ingrese el promedio de millas por galón: ";
    int millasPorGalón;
    cin >> millasPorGalón;

    cout << "Ingrese las tarifas de estacionamiento por día: ";
    int tarifasDeEstacionamiento;
    cin >> tarifasDeEstacionamiento;

    cout << "Ingrese los peajes por día: ";
    int peajesPorDía;
    cin >> peajesPorDía;

 
    int costoTotal = (millas * 100 / millasPorGalón) * costoPorGalón + tarifasDeEstacionamiento + peajesPorDía;


    cout << "Su costo diario de conducir al trabajo es:" << costoTotal << endl;

}
