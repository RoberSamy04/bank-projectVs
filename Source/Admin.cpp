#include <iostream>
#include<string>
#include "Admin.h"
using namespace std;
Admin::Admin() : Employee() {}

Admin::Admin(string name, string password, int id, double salary): Employee(name, password, id, salary)
{}

void Admin::display() {
    Person::display();
    cout << "Salary: " << salary << endl;
}