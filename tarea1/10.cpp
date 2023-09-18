#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Imprime los encabezados de la tabla
    cout << "Longitud de la Cara (cm)\tÁrea de Superficie (cm²)\tVolumen (cm³)" << endl;
    cout << setw(24) << 0 << "\t" << setw(24) << 6 * 0 * 0 << "\t" << setw(16) << 0 * 0 * 0 << endl;
    cout << setw(24) << 1 << "\t" << setw(24) << 6 * 1 * 1 << "\t" << setw(16) << 1 * 1 * 1 << endl;
    cout << setw(24) << 2 << "\t" << setw(24) << 6 * 2 * 2 << "\t" << setw(16) << 2 * 2 * 2 << endl;
    cout << setw(24) << 3 << "\t" << setw(24) << 6 * 3 * 3 << "\t" << setw(16) << 3 * 3 * 3 << endl;
    cout << setw(24) << 4 << "\t" << setw(24) << 6 * 4 * 4 << "\t" << setw(16) << 4 * 4 * 4 << endl;

}
