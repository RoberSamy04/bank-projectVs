#include "bank/Validation.h"
#include <string>
#include <cctype>
using namespace std;

// Method to validate the name
bool Validation::isValidName( const string& name) {
    if (name.length() < 5 || name.length() > 20) 
    {
       return false;
    }
    for (int i = 0; i < name.size(); i++)
    {
        if (!isalpha(name[i]))
        {
            return false;
        }
    }
    return true;
}

// Method to validate the password
bool Validation::isValidPassword(const string& password) {
    if (password.length() >= 8 && password.length() <= 20)
    {
        return true;
    }
    return false;
}

// Method to validate the balance (for Client)
bool Validation::isValidBalance(double balance) {
    if (balance >= 1500)
    {
        return true;
    }
    return false;
}

// Method to validate the salary (for Employee and Admin)
bool Validation::isValidSalary(double salary) {
    if (salary >= 5000)
    {
        return true;
    }
    return false;
}