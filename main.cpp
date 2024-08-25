#include <iostream>
#include"Validation.h"
#include "Client.h"
#include"Employee.h"
#include"Admin.h"
#include<string>
using namespace std;
int main()
{
 Admin admin;
 Employee employee;
 Client client;
client.setBalance(1600);
 client.deposit(400);
 client.withdraw(200);
client.checkBalance();
return 0;
}