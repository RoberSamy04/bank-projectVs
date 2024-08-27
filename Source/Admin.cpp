#include <iostream>
#include<string>
#include "Admin.h"
using namespace std;
Admin::Admin() : Employee() {}

Admin::Admin(string name, string password, int id, double salary): Employee(name, password, id, salary)
{}

void Admin::display() {
    cout << "Admin ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Salary: " << salary << endl;
}