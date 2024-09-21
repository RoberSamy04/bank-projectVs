#include <iostream>
#include <string>
#include "Bank/Employee.h"
#include "Bank/Validation.h"
using namespace std;

// Cons
Employee::Employee() : Person()
{
    salary = 0;
}
Employee::Employee(string name, string password, int id, double salary) : Person(name, password, id), salary(salary)
{
}

// Setters
void Employee::setSalary(double salary)
{
    while (true)
    {
        if (Validation::isValidSalary(salary))
        {
            this->salary = salary;
            break;
        }
        else
        {
            cout << "your salary must be at least 5000 \n Please try again" << endl;
            cin >> salary;
        }
    }
}

// Getters
double Employee::getSalary()
{
    return salary;
}

// Methods
void Employee::display()
{
    Person::display();
    cout << "Salary : " << salary << endl;
}