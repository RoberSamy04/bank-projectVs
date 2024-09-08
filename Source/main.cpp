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
 Employee employee(12 , "remonsamy" , "remon1%@%#" , 5000);
 Employee employee2(13 , "emadyoussef" , "emad745@5", 5600);
 Client client(7 , "redayoussef" , "reda6$423" , 2000);
 Client client2(5 , "ahmed" , "ahmed6435" ,3400);

 employee.addClient(client);
 employee.addClient(client2);
 employee.listClient();
 cout<<"\n =====================\n";
 employee.editClient(7 , "mohamedyoussef" , "momamed5040" , 2000);
 employee.listClient();
 cout<<"\n =====================\n";

 admin.addEmployee(employee);
 admin.addEmployee(employee2);
 admin.listEmployee();
 cout<<"\n =====================\n";
 admin.editEmployee(12 ,"antonsamy" , "anton1231" , 5000);
 admin.listEmployee();
 cout<<"\n =====================\n";

 // FileManager f;
 // f.addClient(client);
 // f.addClient(client2);
 // f.addEmployee(employee);
 // f.addEmployee(employee2);
 // f.addAdmin(admin);
return 0;
}