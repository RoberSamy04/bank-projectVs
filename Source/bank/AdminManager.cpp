//
// Created by rober on 9/22/2024.
//
#include "bank/AdminManager.h"


void AdminManager::printAdminMenu() {
    cout << " (1) Display My Info \n";
    cout << " (2) Update Password \n";
    cout << " (3) Add New Client\n";
    cout << " (4) Search For Client \n";
    cout << " (5) List All Clients \n";
    cout << " (6) Edit Client Info   \n";
    cout << " (7) Add New Employee   \n";
    cout << " (8) Search For Employee   \n";
    cout << " (9)  List All Employees   \n";
    cout << " (10) Edit Employee Info   \n";
    cout <<" (11) List All Admins        \n";
    cout << " (12) Logout \n";
    cout <<"\n";
    cout <<"Please choose a Number  : ";
}

Admin *AdminManager::login(int id, string password) {
    for( int i = 0 ;i < Admin::adminslist.size();i++) {
        if (Admin::adminslist[i].getId()== id && Admin::adminslist[i].getPassword() == password) {
            return &Admin::adminslist[i];
        }
    }
    return nullptr;
}

bool AdminManager::AdminOptions(Admin *admin) {
    int choose;
    FileManager f;
    do {
        printAdminMenu();
        while (!(cin >> choose)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input, please enter a number: ";
        }
        switch (choose) {
            case 1: {
                system("CLS");
                admin->display();
                system("PAUSE");
                system("CLS");
            }
            break;
            case 2: {

                system("CLS");
                string newPassword;
                cout << "Enter new password: ";
                cin >> newPassword;
                 EmployeeManager::updatePassword(admin, newPassword);
                f.updateAdmins();
                f.getAllData();
                cout << "Password updated successfully.\n";
                system("PAUSE");
                system("CLS");
            }
            break;
            case 3: {
                EmployeeManager::newClient(admin);
            }
            break;
            case 4: {
                EmployeeManager::searchForClient(admin);
            }
            break;
            case 5: {
                 EmployeeManager::listAllClients(admin);
            }
            break;
            case 6:
                 EmployeeManager::editClientInfo(admin);
            break;
            case 7: {
                system("CLS");
                string name , password; double salary;
                Employee employee;
                cout << "Please Enter The Employee's Name :\n";
                cin >> name;
                employee.setName(name);
                cout << "Please Enter The Employee's Password :\n";
                cin >> password;
                employee.setPassword(password);
                cout << "Please Enter The Employee's Balance :\n";
                cin >> salary;
                employee.setSalary(salary);
                admin->addEmployee(employee);
                f.updateEmployees();
                f.getAllData();
                cout << "Employee Added Successfully :\n";
                system("PAUSE");
                system("CLS");
            }
            break;
            case 8: {
                int id;
                system("CLS");
                cout <<"Please Enter The Employee's Id : \n";
                cin >>id;
                Employee * e = admin->searchEmployee(id);
                if (e) {
                    e->display();
                }
                else
                    cout <<"Employee Not Found \n";
                system("PAUSE");
                system("CLS");
            }
            break;
            case 9: {
                system("CLS");
                admin->listEmployee();
                system("PAUSE");
                system("CLS");
            }

            break;
            case 10: {
                system("CLS");
                int id;
                string name , password;
                double salary;
                Employee e;
                cout <<"Please Enter The Employee's Id : \n";
                cin >>id;
                e.setId(id);
                cout <<"Please Enter The Name : \n";
                cin >> name;
                e.setName(name);
                cout <<"Please Enter The Password : \n";
                cin >> password;
                e.setPassword(password);
                cout <<"Please Enter The Salary : \n";
                cin >>salary ;
                e.setSalary(salary);
                admin->editEmployee(e.getId(), e.getName() , e.getPassword() , e.getSalary());
                f.updateEmployees();
                f.getAllData();
                system("PAUSE");
                system("CLS");
            }
            break;
            case 11: {
                system("CLS");
                admin->listAdmin();
                system("PAUSE");
                system("CLS");
            }
            break;
            case 12:
                return true;
            default: {
                system("CLS");
                cout << "Invalid choice, please try again.\n";
                system("CLS");
            }

        }
    }while (choose!=12);
    return false;
}
