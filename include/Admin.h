#ifndef ADMIN_H
#define ADMIN_H
#include <iostream>
#include <Employee.h>
using namespace std;

class Admin :public Employee {
public :
    Admin () : Employee () {
    }
    Admin (int i , string n , string p , double s) : Employee (i,n,p,s) {
    }
};

#endif // ADMIN_H
