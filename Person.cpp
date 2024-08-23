#include "Person.h"
#include "Validation.h"
#include <iostream>
#include <cctype>
using namespace std;
//Cons
Person::Person()
{
    id = 0; 
}
Person::Person(string name, string password, int id) : name(name), password(password), id(id) 
{
}

//Setters
 void Person::setName(string name)
 {
    if (Validation::isValidName(name)) 
    {
        this->name = name;
    } else 
    {
        cout << "Invalid name. It must contain only alphabetic characters and be between 5 and 20 characters long." << endl;
    }
 }
 void Person::setPassword(string password)
 {
    if (Validation::isValidPassword(password)) 
    {
        this->password = password;
    }
    else
    {cout <<"Your name must be more than 5 letters and less than 20 letters"<<endl;}
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
 
