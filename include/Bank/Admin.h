#ifndef ADMIN_H
#define ADMIN_H
#include "Employee.h"
class Admin : public Employee
{
public:
    Admin();
    Admin(string name, string password, int id, double salary);

    void display();
};

#endif // ADMIN_H