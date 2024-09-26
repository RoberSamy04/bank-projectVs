#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <vector>
#include "Person.h"
#include "Client.h"
class Employee : public Person
{
protected:
double salary;

public:
Employee();
Employee(int id, string name, string password, double salary);
void setSalary(double salary);
double getSalary();
void addClient(Client& client);
Client* searchClient(int id);
 void listClient();
void editClient(int id, string name, string password, double balance);
 void display();
 static  vector<Employee> employeelist;;
 static  vector<Employee> ::iterator eit;
};

#endif // EMPLOYEE_H