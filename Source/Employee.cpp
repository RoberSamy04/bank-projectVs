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
Employee::Employee(string name, string password, int id, double salary) : Person( name , password , id) , salary(salary)
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
void Employee::display()
{
  cout << "Name : " << name << endl;
  cout << "id : " << id << endl;
   cout << "password : " << password << endl;
    cout << "Salary : " << salary << endl;
}