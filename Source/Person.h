#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;
class Person {

protected:
    string name, password;
    int id;

public:

    Person();
    Person(int id, string name, string password);

    void setName(string name);
    void setPassword(string password);
    void setId(int id);

    string getName();
    string getPassword();
    int getId();
    void display();
};
#endif // PERSON_H