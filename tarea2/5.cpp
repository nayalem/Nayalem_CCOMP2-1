#include <iostream>
#include <string>

using namespace std;

class Cuenta {
public:
    Cuenta(unsigned int numeroCuenta, string primerNombre, string apellido, double saldo)
        : numeroCuenta(numeroCuenta), primerNombre(primerNombre), apellido(apellido), saldo(saldo) {}

private:
    unsigned int numeroCuenta;
    string primerNombre;
    string apellido;
    double saldo;
};

int main() {
  
    Cuenta miCuenta{123456, "Maria", "Tellez", 1000.0};

    
}
