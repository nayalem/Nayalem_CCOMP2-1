#include <iostream>

using namespace std;

class Date {
public:
    
    Date(int mes, int dia, int año)
        : mes(mes), dia(dia), año(año) {
        
        if (mes < 1 || mes > 12) {
            mes = 1;
        }
    }

    
    void setMes(int nuevoMes) {
       
        if (nuevoMes >= 1 && nuevoMes <= 12) {
            mes = nuevoMes;
        }
    }

    int getMes() const {
        return mes;
    }

    void setDia(int nuevoDia) {
        dia = nuevoDia;
    }

    int getDia() const {
        return dia;
    }

    void setAño(int nuevoAño) {
        año = nuevoAño;
    }

    int getAño() const {
        return año;
    }

    
    void displayDate() const {
        cout << mes << "/" << dia << "/" << año << endl;
    }

private:
    int mes;
    int dia;
    int año;
};

int main() {
    
    Date fecha(9, 13, 2023);

    
    cout << "Fecha: ";
    fecha.displayDate();

   
    fecha.setMes(12);

    fecha.setAño(2024);

   
    cout << "Fecha actualizada: ";
    fecha.displayDate();

   
}
