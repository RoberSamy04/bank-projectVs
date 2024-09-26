#include "bank/Person.h"
#include "bank/Validation.h"
#include <iostream>
#include <cctype>
using namespace std;
//Cons
Person::Person()
{
    id = 0; 
}
Person::Person(int id, string name, string password) : name(name), password(password), id(id)
{
}

//Setters
 void Person::setName(string name)
 {
    while(true) {
        if (Validation::isValidName(name))
        {
            this->name = name;
            break;
        } else
        {
            cout << "Invalid name. It must contain only alphabetic characters and be between 5 and 20 characters long.\n Please try again" << endl;
            cin >> name;
        }
    }
 }
 void Person::setPassword(string password)
 {
    while (true) {
        if (Validation::isValidPassword(password))
        {
            this->password = password;
            break;
        }
        else {
            cout <<"Invalid password. It must contain more than 5 characters and less than 20 characters.\n Please try again"<<endl;
            cin >> password;
        }
    }
 }
 void Person::setId(int id)
{
    this->id = id;
}

//Getters
 string Person::getName() {
    return name;
}

string Person::getPassword() {
    return password;
}

int Person::getId() {
    return id;
}
 void Person::display() {
    cout << "Name : " << getName() << endl;
    cout << "id : " << getId() << endl;
    cout << "password : " << getPassword() << endl;
 }

