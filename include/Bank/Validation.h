#ifndef VALIDATION_H
#define VALIDATION_H
#include <iostream>
#include <string>
using namespace std;
class Validation
{
public:
    // Method to validate the name
    static bool isValidName(const string &name);

    // Method to validate the password
    static bool isValidPassword(const string &password);

    // Method to validate the balance (for Client)
    static bool isValidBalance(double balance);

    // Method to validate the salary (for Employee and Admin)
    static bool isValidSalary(double salary);
};

#endif // VALIDATION_H