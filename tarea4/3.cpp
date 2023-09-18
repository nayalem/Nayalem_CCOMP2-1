#include <iostream>

using namespace std;

int main() {
    long long numero= 600851475143;
    long long factormayor=0;
    
    
   
    for (int i = 2; i <= numero; i++) {
        while (numero % i == 0) {
            if(i>factormayor){
                factormayor= i;
            }
            numero/=i;
               
        }
    }
    cout<<"El factor mayor es: "<<factormayor;
}
