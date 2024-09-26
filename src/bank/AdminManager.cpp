//
// Created by rober on 9/22/2024.
//
#include "bank/AdminManager.h"

void AdminManager::printAdminMenu()
{
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
    cout << " (11) List All Admins        \n";
    cout << " (12) Logout \n";
    cout << "\n";
    cout << "Please choose a Number  : ";
}

Admin *AdminManager::login(int id, string password)
{
    for (int i = 0; i < Admin::adminslist.size(); i++)
    {
        if (Admin::adminslist[i].getId() == id && Admin::adminslist[i].getPassword() == password)
        {
            return &Admin::adminslist[i];
        }
    }
    return nullptr;
}

bool AdminManager::AdminOptions(Admin *admin)
{
    int choose;
    do
    {
        printAdminMenu();
        while (!(cin >> choose))
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input, please enter a number: ";
        }
        switch (choose)
        {
        case 1:
        {

            admin->display();
            system("PAUSE");
        }
        break;
        case 2:
        {

            string newPassword;
            cout << "Enter new password: ";
            cin >> newPassword;
            updatePassword(admin, newPassword);
            cout << "Password updated successfully.\n";
        }
        break;
        case 3:
        {
            newClient(admin);
        }
        break;
        case 4:
        {
            searchForClient(admin);
        }
        break;
        case 5:
        {
            listAllClients(admin);
        }
        break;
        case 6:
            editClientInfo(admin);
            break;
        case 7:
        {
            string name, password;
            double salary;
            Employee employee;
            FileManager f;
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
            cout << "Employee Added Successfully :\n";
        }
        break;
        case 8:
        {
            int id;
            cout << "Please Enter The Employee's Id : \n";
            cin >> id;
            Employee *e = admin->searchEmployee(id);
            if (e)
            {
                e->display();
            }
            else
                cout << "Employee Not Found \n";
        }
        break;
        case 9:
            admin->listEmployee();
            break;
        case 10:
        {
            int id;
            string name, password;
            double balance;
            FileManager f;
            cout << "Please Enter The Employee's Id : \n";
            cin >> id;
            cout << "Please Enter The Name : \n";
            cin >> name;
            cout << "Please Enter The Password : \n";
            cin >> password;
            cout << "Please Enter The Balance : \n";
            cin >> balance;
            admin->editEmployee(id, name, password, balance);
            f.updateEmployees();
        }
        break;
        case 11:
        {

            admin->listAdmin();
            system("PAUSE");
        }
        break;
        case 12:
            return true;
        default:
        {

            cout << "Invalid choice, please try again.\n";
        }
        }
    } while (choose != 12);
    return false;
}
