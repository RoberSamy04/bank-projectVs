#include <iostream>
#include"Validation.h"
#include "Client.h"
#include"Employee.h"
#include"Admin.h"
#include<string>
using namespace std;
int main()
{
Admin admin("ahmedOmar" , "ahmed1324@" , 1 , 7000);
Employee employee("ahmedOmar" , "ahmed1324@" , 2 , 7000);
Client client("ahmedOmar" , "ahmed1324@" , 3 , 7000);
admin.display();
employee.display();
client.display();
return 0;
}