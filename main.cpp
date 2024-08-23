#include <iostream>
#include"Client.h"
#include"Employee.cpp"
#include "Admin.cpp"
#include<string>
using namespace std;
int main()
{
Client c;
c.setBalance(1399);
c.getBalance();
return 0;
}