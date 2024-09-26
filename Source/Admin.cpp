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
    for (eit =employeelist.begin() ; eit !=employeelist.end(); eit++) {
        eit->display();
        cout<<"-----------------------------\n";
    }
}
void Admin::listAdmin() {
    for (ait =adminslist.begin() ; ait !=adminslist.end(); ait++) {
        ait->display();
        cout<<"-----------------------------\n";
    }
}
void Admin::display() {
   Employee::display();

}
 vector<Admin> Admin::adminslist;
 vector<Admin>::iterator Admin:: ait;