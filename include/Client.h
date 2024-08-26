#ifndef CLIENT_H
#define CLIENT_H
#include <iostream>
#include <string>
#include <Person.h>
#include <Validation.h>
using namespace std;


class Client : public Person
{
private:
    double balance ;
public:
    Client (  ) : Person(  )
    {
        balance = 0 ;
    }
    Client (int i, string n, string p, double b) : Person (i,n,p)
    {
        setbalance (b) ;
    }
    void setbalance (double b)
    {
        if(Validation::valibalance (b))
        {
            balance = b ;
        }
        else
        {
            cout << "Balance Must Start with 1500 " << endl;
        }
    }
    double getbalance ()
    {
        return balance ;
    }
    void depoist (double amount)
    {
        if (amount > 0)
        {
            balance += amount ;
        }
    }
    void withdraw (double amount)
    {
        if (amount > 0  && amount <= balance)
        {
            balance -= amount ;
        }
    }
    void transferto (double amount, Client& another)
    {
        if (amount > 0 && amount <= balance) {
        withdraw(amount) ;
        another.depoist(amount) ;
        }
        else {
            cout << "Balance Not Enough!" << endl;
        }
    }
    void checkbalance ()
    {
        cout << "Balance is :" << balance << endl;
    }
    void display ()
    {
        Person::display () ;
        cout << "Balance is :" << balance << endl;
    }
};

#endif // CLIENT_H
