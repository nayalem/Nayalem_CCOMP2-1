#include <iostream>
#include <string>
#include "Account.h"

using namespace std;

int main()
{
    Account account1{"Jane Green", 50};
    Account account2{"Jhon Blue", -7};  

    cout << "account1:  " << account1.getName()<< " balance is $"
      << account1.getBalance();
    cout << "account2:  " << account2.getName()<< " balance is $"
      << account2.getBalance();

    cout << "\n\nEnter deposit amount for account1: ";
    int depositAmount;
    cin >> depositAmount;
    cout <<" adding" <<depositAmount << " to account1 balance";
    account1.deposit(depositAmount);


    cout << "\n\naccount1: " << account1.getName() << " balance is $"
       << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << " balance is $"
       << account2.getBalance();
 
 
    cout << "\n\nEnter deposit amount for account2: ";
    cin >> depositAmount; 
    cout << "adding " << depositAmount << " to account2 balance";
    account2.deposit(depositAmount);

    cout << "\n\naccount1: " << account1.getName() << " balance is $"
       << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << " balance is $"
       << account2.getBalance();

    cout<< "\n\nIngresa el monto de retiro de la cuenta1: ";
    int retirocantidad;
    cin>> retirocantidad;
    cout<< "retiro"<< retirocantidad<< " de la cuenta1";
    account1.retirar(retirocantidad);

    cout<< "\n\nIngresa el monto de retiro de la cuenta2: ";
    cin>> retirocantidad;
    cout<< "retiro "<< retirocantidad << " de la cuenta1";
    account2.retirar(retirocantidad);

    cout << "\n\naccount1: " << account1.getName() << " balance is $"
       << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << " balance is $"
       << account2.getBalance();

    
}