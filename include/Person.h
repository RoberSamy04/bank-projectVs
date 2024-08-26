#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
#include <Validation.h>
using namespace std;


class Person
{
    protected:
    int id ;
    string name ;
    string password ;
public :
    Person () {
        id = 0 ;
        name = "" ;
        password = "" ;
    }
    Person (int i , string n , string p) {
        setid (i) ;
        setname(n);
        setpassword(p);
    }
    void setid (int i ) {
        id = i ;
    }
    void setname (string n ) {
        if ( Validation::valiname(n) ) {
            name = n ;
        }
        else {
            cout << "Sorry , Invalid Name " << endl;
        }
    }
    void setpassword (string p ) {
        if (Validation::valipassword(p)) {
            password = p ;
        }
        else {
            cout << "Wrong Password" << endl;
        }
    }
    int getid () {
        return id ;
    }
    string getname () {
        return name ;
    }
    string getpassword () {
        return password ;
    }
    void display () {
        cout << " ID :" << id << endl;
        cout << " Name :" << name << endl;
        cout << " Paassword :" << password << endl;
    }
};

#endif // PERSON_H
