#include <iostream>
#include <string>
using namespace std;
class VehiculoMotorizado {
public:
   
    VehiculoMotorizado(string marca, string tipoCombustible, int Fabricacion, string color, int capacidadMotor)
        : marca(marca), tipoCombustible(tipoCombustible), anioFabricacion(anioFabricacion), color(color), capacidadMotor(capacidadMotor) {}

   
    void setMarca(string nuevaMarca) {
        marca = nuevaMarca;
    }

    string getMarca() const {
        return marca;
    }

    void setTipoCombustible(string nuevoTipoCombustible) {
        tipoCombustible = nuevoTipoCombustible;
    }

    string getTipoCombustible() const {
        return tipoCombustible;
    }

    void AnioFabricacion(int fabricacion) {
        if (fabricacion > 0) {
            anioFabricacion = fabricacion;
        }
    }

    int getAnioFabricacion() const {
        return anioFabricacion;
    }

    void setColor(string nuevoColor) {
        color = nuevoColor;
    }

    string getColor() const {
        return color;
    }

    void setCapacidadMotor(int nuevaCapacidadMotor) {
        if (nuevaCapacidadMotor > 0) {
            capacidadMotor = nuevaCapacidadMotor;
        }
    }

    int getCapacidadMotor() const {
        return capacidadMotor;
    }

   
    void mostrarDetallesVehiculo() const {
        cout << "Marca: " << marca << endl;
        cout << "Tipo de Combustible: " << tipoCombustible << endl;
        cout << "Año de Fabricación: " << anioFabricacion << endl;
        cout << "Color: " << color << endl;
        cout << "Capacidad del Motor: " << capacidadMotor << " cc" << endl;
    }

private:
    string marca;
    string tipoCombustible;
    int anioFabricacion;
    string color;
    int capacidadMotor;
};

int main() {
    
    VehiculoMotorizado vehiculo("Toyota", "Gasolina", 2022, "Azul", 2000);

    
    cout << "Detalles del Vehículo:" << endl;
    vehiculo.mostrarDetallesVehiculo();

    
}

