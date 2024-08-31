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
 Client client2;
client.setName("rRR");
 client.setPassword("roRR");
 client.setBalance(200);
 client.deposit(-599);
 client.withdraw(-23);
 client.transferTo(-499, client2);
cout << client2.getBalance() << endl;
 cout << client.getName() << endl;
 cout << client.getPassword()<<endl;
 cout << client.getBalance() << endl;
 employee.setSalary(300) ;
 cout <<employee.getSalary() << endl;
return 0;
}