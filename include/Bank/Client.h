#ifndef CLIENT_H
#define CLIENT_H
#include "Person.h"

class Client : public Person
{
private:
    double balance;

public:
    Client();
    Client(string name, string password, int id, double balance);
    void setBalance(double balance);
    double getBalance();
    void deposit(double amount);
    void withdraw(double amount);
    void transferTo(double amount, Client &recipient);
    void checkBalance();
    void display();
};

#endif // CLIENT_H