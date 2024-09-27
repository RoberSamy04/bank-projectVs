#ifndef ADMIN_H
#define ADMIN_H
#include "Employee.h"
#include <vector>
class Admin : public Employee
{


public:
    Admin();
    Admin(int id, string name, string password, double salary);
    void addEmployee(Employee& employee);
    Employee* searchEmployee(int id);
    void editEmployee(int id, string name, string password, double salary);
    void listEmployee();
    void listAdmin();
     void display();
    static vector<Admin> adminslist;
    static  vector<Admin>::iterator ait;
};

;


#endif // ADMIN_H