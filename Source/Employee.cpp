#include <iostream>
#include<string>
#include "Employee.h"
#include"Validation.h"
using namespace std;
//Cons
Employee::Employee() : Person()
{
    salary = 0;
}
Employee::Employee(int id, string name, string password, double salary) : Person( id , name , password) , salary(salary)
{}

//Setters
void Employee::setSalary(double salary)
{
    while (true) {
        if (Validation::isValidSalary(salary))
        {
            this->salary = salary;
            break;
        }
        else
        {
            cout << "your salary must be at least 5000 \n Please try again" << endl;
            cin >>salary;
        }
    }
}

//Getters
double Employee::getSalary()
{
  return salary;
}

//Methods
void Employee::addClient(Client& client) {
    clientlist.push_back(client);
}

Client* Employee::searchClient(int id) {

    for (int i = 0 ; i<clientlist.size(); i++) {
        if (clientlist[i].getId() == id) {
            return &clientlist[i];
        }
    }
    return nullptr;
}

void Employee::editClient(int id, string name, string password, double balance) {
    Client * client = searchClient(id);
    if (client) {
        client->setName(name);
        client->setPassword(password);
        client->setBalance(balance);
    }
    else {
        cout <<"Client not Found " << endl;
    }
}

void Employee::listClient() {
    for (int i = 0 ; i<clientlist.size(); i++) {
        cout << " ID: " << clientlist[i].getId() << " Name: " << clientlist[i].getName() << " Password : " <<clientlist[i].getPassword() <<" Balance : "<<clientlist[i].getBalance() << endl;
    }
}


void Employee::display()
{
    Person::display();
    cout << "Salary : " << salary << endl;
}