#include <iostream>
#include<string>
#include "Admin.h"
using namespace std;
//Cons
Admin::Admin() : Employee() {}
Admin::Admin(int id, string name, string password, double salary): Employee(id, name, password, salary)
{}

//Methods
void Admin::addEmployee(Employee& employee) {
    employeelist.push_back(employee);
}

Employee* Admin::searchEmployee(int id) {
    for (int i = 0 ; i <employeelist.size(); i++) {
        if (employeelist[i].getId() == id) {
            return &employeelist[i];
        }
    }
    return nullptr;
}

void Admin::editEmployee(int id, string name, string password, double salary) {
    Employee *employee = searchEmployee(id);
    if (employee) {
        employee->setName(name);
        employee->setPassword(password);
        employee->setSalary(salary);
    }
    else
        cout <<"Employee not Found " << endl;
}

void Admin::listEmployee() {
    for (int i = 0 ; i<employeelist.size(); i++) {
        cout << " ID: " << employeelist[i].getId() << " Name: " << employeelist[i].getName() << " Password : " <<employeelist[i].getPassword()
        <<" Salary : "<<employeelist[i].getSalary() << endl;
    }
}

void Admin::display() {
    cout << "Admin ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Salary: " << salary << endl;
}