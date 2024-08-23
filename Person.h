#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;
class Person {
//
protected:
    string name, password;
    int id;

public:

    Person();
    Person(string name, string password, int id);

    void setName(string name);
    void setPassword(string password);
    void setId(int id);

    string getName();
    string getPassword();
    int getId();
    virtual void display() = 0 ;
};
#endif // PERSON_H