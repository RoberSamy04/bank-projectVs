#include <iostream>
#include<string>

#include "bank/Client.h"
#include "bank/Validation.h"
using namespace std;
//Cons

  Client::Client() : Person()
  {
    balance = 0;
  }
  Client::Client(int id , string name , string password , double balance) : Person(id , name , password) , balance(balance)
  {
  }
  //Setters
  void Client::setBalance( double balance)
  {
    while (true) {
      if (Validation::isValidBalance(balance))
      {
        this->balance = balance;
        break;
      }
      else
      {
        cout <<"the balance must be at least 1500  \n Please try again"<<endl;
        cin >>balance;
      }
    }
  }
  //Getters
  double Client::getBalance(){return balance;}

 //Methods
 void Client::deposit(double amount)
 {
    while (true) {
      if (amount > 0)
      {
        balance +=amount;
        cout << "Deposit successful.\n";
        break;
      }
      else
      {
        cout << "amount must be positive \n Please try again" << endl;
        cin >> amount;
      }
    }
 }
void Client::withdraw (double amount)
{
    while (true) {
      if (amount > 0 && amount <= balance)
      {
        balance -=amount;
        cout << "Withdrawal successful.\n";
        break;
      }
      else
      {
        cout <<"amount must be positive and the amount must be less than the balance \n Please try again" << endl;
        cin >> amount;
      }
    }
}
void Client::transferTo(double amount, Client& recipient)
{
    while (true) {
      if (amount > 0 && amount <= balance)
      {
        balance -= amount;
        recipient.balance+= amount;
        cout << "Transfer successful.\n";
        break;
      }
      else
      {
        cout << "Invalid transfer amount! \n Please try again" << endl;
        cin >> amount;
      }
    }
}
void Client::checkBalance()
{
  cout << "Balance : " << balance << endl;
}
void Client::display()
{
    Person::display();
    cout << "Balance : " << balance << endl;
}
 vector<Client> Client::clientlist;
 vector<Client>::iterator Client::cit;
