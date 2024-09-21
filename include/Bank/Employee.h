#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "Person.h"
class Employee : public Person
{
protected:
double salary;
public:
Employee();
Employee(string name, string password, int id, double salary);
void setSalary(double salary);
double getSalary();
void display();
};

#endif // EMPLOYEE_H