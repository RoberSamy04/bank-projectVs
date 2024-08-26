#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include <string>
#include <Person.h>
#include <Validation.h>
using namespace std;


class Employee : public Person
{
private :
    double salary ;
public :
    Employee () : Person () {
        salary = 0 ;
    }
    Employee (int i , string n , string p , double s) : Person (i,n,p) {
        setsalary (s) ;
    }
    void setsalary (double s) {
        if (Validation::valisalary(s)) {
            salary = s ;
        }
        else {
            cout << "Invalid Salary" << endl;
        }
    }
    double getsalary () {
        return salary ;
    }
    void display () {
        Person::display () ;
        cout << " Salary : " << salary << endl ;
    }

};

#endif // EMPLOYEE_H
