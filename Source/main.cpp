#include <iostream>
#include "Client.h"
#include"Employee.h"
#include"FileManager.h"
#include"Admin.h"
#include "Screens.h"
#include <stdexcept>
#include<string>

using namespace std;

int main()
{
    Admin admin(10,"robersamy" , "rober1234" , 6000);
    // Employee employee(10 , "remonsamy" , "remon1%@5%#" , 5000);
    // Employee employee2(11 , "emadyoussef" , "emad745@45", 5600);
    // Employee employee3(12 , "AliAhmed" , "Ali433263" , 9800);
    // Client client;
    // client.setName("redayoussef"); client.setPassword("reda6$423"); client.setBalance(2000);
    // Client client2;
    // client2.setName("ahmedsamy"); client2.setPassword("ahmed6435") ; client2.setBalance(3400);
    // Client client3;
    // client3.setName("TaTaSamy"); client3.setPassword("Tata12345") ; client3.setBalance(5000);
    // Client client4;
    // client4.setName("SeifAmr"); client4.setPassword("seifAmr643*^") ; client4.setBalance(5604);
    // FileManager f;
    //
    // employee.addClient(client);
    // employee.addClient(client2);
    // employee.addClient(client3);
    // employee.addClient(client4);
    //
    // f.updateClients();
    // f.getAllData();
    // employee.editClient(1,"rbrsamy","rebe6443",3000);
    // f.updateClients();
    // f.getAllData();
    // employee.listClient();
    //3




    // f.addEmployee(employee);
    // f.addEmployee(employee2);
    // f.addEmployee(employee3);
    // f.getAllEmployees();
    // admin.listEmployee();

    //  f.addAdmin(admin);
    //  f.getAllAdmins();
    //  admin.listAdmin();

    // Screens::welcome();
    // Screens::bankName();
    // Screens::loginAs();
    // Screens::valid(0);
    // Screens::loginScreen(0);


    // cout<< "Hello"<<endl<<flush; //flush forces the printing to the screen before it pauses
    // system ("PAUSE"); //pause displays a message and waits for the user to hit a key
    //
    // system("CLS");
    // cout<< "Hello"<<flush; //flush forces the printing to the screen before it clears
    // system("CLS");
    // cout<< "Good-Bye"<<endl << flush;
     Screens::runApp();

    // Called getch() to halt the program
    // This allows us to visualize the effect produced by
    // clrscr() Upon pressing a single key the program
    // execution continues & clrscr is called






return 0;
}