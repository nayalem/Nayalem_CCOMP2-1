#include <iostream>
#include <string>
using namespace std;

class Factura {
public:
    Factura(string num, string des, int cant, int pre)
        : numerodefactura(num), descripcion(des), cantidad(cant),precio(pre), vax (vax), descuento{0}{}

    void setNumerodefactura(string num) {
        numerodefactura = num;
    }

    void setDescripcion(string des) {
        descripcion = des;
    }

    void setCantidad(int cant) {
        if (cant > 0) {
            cantidad = cant;
        }
    }

    void setPrecio(int pre) {
        if (pre > 0) {
            precio = pre;
        }
    }

    void setTasaIVA(double vax) {
        if (vax > 0) {
            vax = vax;
        }
    }

    void Descuento(double descuento) {
        if (descuento > 0) {
            descuento = descuento;
        }
    }

    string getNumerodefactura() const{
        return numerodefactura;
    }

    string getDescripcion() const{
        return descripcion;
    }
    int getCantidad() const{
        return cantidad;
    }

    int getPrecio() const{
        return precio;
    }

    int getTasaIVA() const{
        return vax;
    }
    double getDescuento() const{
        return descuento;
    }
    
    double getMontoFactura() const {
        double montoscondescuento= cantidad*precio;
        double montoconIVA=montoscondescuento +(montoscondescuento*vax);
        return montoconIVA;
    }

private:
    string numerodefactura;
    string descripcion;
    int cantidad;
    int precio;
    double vax;
    double descuento;
};

int main() {
    
    Factura factura("12345", "Llave ", 5, 20);

  
    cout << "Número de factura: " << factura.getNumerodefactura() << endl;
    cout << "Descripción de la parte: " << factura.getDescripcion() << endl;
    cout << "Cantidad: " << factura.getCantidad() << endl;
    cout << "Precio por artículo: $" << factura.getPrecio() << endl;
    cout << "Tasa de IVA: " << factura.getTasaIVA() << endl;
    cout << "Tasa de descuento: " << factura.getDescuento() << endl;

    std::cout << "Monto de la factura: $" << factura.getMontoFactura() << endl;


}
