#include <iostream>
#include<string>
#include <cctype>
#include<Client.h>
#include <Validation.h>
using namespace std;
//Cons
  Client::Client()
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
