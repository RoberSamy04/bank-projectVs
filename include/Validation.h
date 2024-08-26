#ifndef VALIDATION_H
#define VALIDATION_H
#include <iostream>
#include <string>
#include <cctype>

using namespace std;


class Validation
{
public:
    static bool valiname(string n)
    {
        if (!(n.size() >= 5 && n.size() <= 20))
        {
            return false ;

        }
        for (int i = 0; i < n.size(); i++)
        {
            if (!isalpha (n[i]))
            {
                return false ;
            }
        }
                return true ;
    }

    static bool valipassword(string p)
    {
        if (p.size() >= 8 && p.size() <= 20)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    static bool valibalance(double b)
    {
        if (b < 1500)
        {
            return false;
        }
        return true;
    }
    static bool valisalary(double s)
    {
        if (s < 5000)
        {
            return false;
        }
        return true;
    }
};
#endif // VALIDATION_H
