#include <string>
class Account {
public:
   Account(std::string accountName, int initialBalance )
      : name{accountName}{
      if (initialBalance > 0){
         balance =initialBalance;
      }
   }
   
   void deposit (int depositAmount){
      if (depositAmount > 0){
         balance = balance + depositAmount;
      }
   }
   void retirar (int retirarcantidad){
      if (retirarcantidad > balance){
         std:: cout<<"El monto del retiro excedió el saldo de la cuenta";
      } else{
         balance = balance - retirarcantidad;
      }
   }
   int getBalance() const{
      return balance;
   }

   void setName(std:: string accountName){
      name= accountName;
   }

   std::string getName() const {
    return name;
   }
private:
   std::string name;
   int balance{0};
}; 