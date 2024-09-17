#include <iostream>
#include "Client.h"
#include"Employee.h"
#include"FileManager.h"
#include"Admin.h"
#include<string>
using namespace std;
int main()
{
 Admin admin(10,"robersamy" , "rober1234" , 6000);
 Employee employee(10 , "remonsamy" , "remon1%@5%#" , 5000);
 Employee employee2(11 , "emadyoussef" , "emad745@45", 5600);
 Employee employee3(12 , "AliAhmed" , "Ali433263" , 9800);
 Client client(51 , "redayoussef" , "reda6$423" , 2000);
 Client client2(26 , "ahmedsamy" , "ahmed6435" ,3400);
 Client client3(23 , "TaTaSamy" , "Tata12345" , 5000);
 Client client4(45 , "SeifAmr"  , "seifAmr643*^" , 5604);

;

 FileManager f;
f.removeAllClients();
 f.removeAllAdmins();
 f.removeAllEmployees();

//  f.addClient(client);
//  f.addClient(client2);
//  f.addClient(client3);
//  f.addClient(client4);
//  f.getAllClients();
// employee.listClient();

 // f.addEmployee(employee);
 // f.addEmployee(employee2);
 // f.addEmployee(employee3);
 // f.getAllEmployees();
 // admin.listEmployee();

 f.addAdmin(admin);
 f.getAllAdmins();
 admin.listAdmin();
return 0;
}