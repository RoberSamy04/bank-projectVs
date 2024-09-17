#include <iostream>
#include "Client.h"
#include"Employee.h"
#include"FileManager.h"
#include "vector"
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

 // employee.addClient(client);
 // employee.addClient(client2);
 // employee.listClient();
 // cout<<"\n =====================\n";
 //  employee.editClient(1 , "mohamedyoussef" , "momamed5040" , 2000);
 // employee.listClient();
 // cout<<"\n =====================\n";

 // admin.addEmployee(employee);
 // admin.addEmployee(employee2);
 // admin.listEmployee();
 // cout<<"\n =====================\n";
 // admin.editEmployee(12 ,"antonAdel" , "anton1231" , 5000);
 // admin.listEmployee();
 // cout<<"\n =====================\n";

 FileManager f;
  f.removeAllClients();
  f.removeAllEmployees();
  f.removeAllAdmins();


 //  f.addClient(client);
 //  f.addClient(client2);
 //  f.addClient(client3);
 //  f.addClient(client4);
 //  // f.getAllClients();
 //
 //  f.addEmployee(employee);
 //  f.addEmployee(employee2);
 //  f.addEmployee(employee3);
 //  // f.getAllEmployees();
 //
 //
 // f.addAdmin(admin);
 // f.getAllAdmins();
return 0;
}