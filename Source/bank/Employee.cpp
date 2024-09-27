#include <iostream>
#include<string>
#include "bank/Employee.h"
#include "bank/Client.h"
#include "bank/Validation.h"
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
   Client:: clientlist.push_back(client);
}

Client* Employee::searchClient(int id) {
    for (int i = 0 ; i<Client::clientlist.size(); i++) {
        if (Client::clientlist[i].getId() == id) {
            return &Client::clientlist[i];
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
        cout << "Client Info Updated \n" ;
    }
    else {
        cout <<"Client not Found " << endl;
    }
}

void Employee::listClient() {
    for (Client::cit = Client::clientlist.begin(); Client::cit!=Client::clientlist.end(); ++Client::cit) {
       Client::cit->display();
        cout<<"-----------------------------\n";
    }
}


void Employee::display()
{
    Person::display();
    cout << "Salary : " << getSalary() << endl;
}
 vector<Employee> Employee::employeelist;;
 vector<Employee> ::iterator Employee:: eit;