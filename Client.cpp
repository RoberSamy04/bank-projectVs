#include <iostream>
#include<string>
#include <cctype>
#include "Client.h"
#include "Validation.h"
using namespace std;
//Cons
  Client::Client() : Person()
  {
    balance = 0;
  }
  Client::Client(string name , string password , int id , double balance) : Person(name , password , id) , balance(balance)
  {
  }
  //Setters
  void Client::setBalance( double balance)
  {
    if (Validation::isValidBalance(balance))
    {
      this->balance = balance;
    }
    else
    {
      cout <<"the balance must be more than 1500 "<<endl;
    }
  }
  //Getters
  double Client::getBalance(){return balance;}

 //Methods
 void Client::deposit(double amount)
 {
  if (amount > 0)
  {
    balance +=amount;
  }
  else
  {
    cout << "amount must positive" << endl;
  }
 }
void Client::withdraw (double amount)
{
  if (amount > 0 && amount <= balance)
  {
    balance -=amount;
  }
  else
  {
    cout <<"amount must positive and the amount must be less than the balance" << endl;
  }
}
void Client::transferTo(double amount, Client& recipient)
{
  if (amount > 0 && amount <= balance)
  {
     balance -= amount;
     recipient.balance+= amount;
  }
  else
  {
    cout << "Invalid transfer amount!" << endl;
  }
}
void Client::checkBalance()
{
  cout << "Balance : " << balance << endl;
}
void Client::display()
{
  cout << "Name : " << name << endl;
  cout << "id : " << id << endl;
   cout << "password : " << password << endl;
    cout << "Balance : " << balance << endl;
}