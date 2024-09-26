//
// Created by rober on 9/22/2024.
//
#include "EmployeeManager.h"
void EmployeeManager::printEmployeeMenu() {
    cout << " (1) Display My Info \n";
    cout << " (2) Update Password \n";
    cout << " (3)  Add New Client\n";
    cout << " (4)  Search For Client \n";
    cout << " (5) List All Clients \n";
    cout << " (6) Edit Client Info   \n";
    cout << " (7) Logout \n";
    cout <<"\n";
    cout <<"Please choose a Number  : ";
}

void EmployeeManager::updatePassword(Person *person  , const string &line) {
    person->setPassword(line);
}

void EmployeeManager::newClient(Employee *employee) {
    string password , name;
    double balance;
    Client client;
    FileManager f;
    cout << "Please Enter The Client's Name :\n";
    cin >> name;
    client.setName(name);
    cout << "Please Enter The Client's Password :\n";
    cin >> password;
    client.setPassword(password);
    cout << "Please Enter The Client's Balance :\n";
    cin >> balance;
    client.setBalance(balance);
    employee->addClient(client);
    f.updateClients();
    f.getAllData();
    cout << "Client Added Successfully :\n";
}

void EmployeeManager::listAllClients(Employee *employee) {
    employee->listClient();
}

void EmployeeManager::editClientInfo(Employee *employee) {
    int id;
    string name , password;
    double balance;
    FileManager f;
    cout <<"Please Enter The Client's Id : \n";
    cin >>id;
    cout <<"Please Enter The Name : \n";
    cin >> name;
    cout <<"Please Enter The Password : \n";
    cin >> password;
    cout <<"Please Enter The Balance : \n";
    cin >> balance;
    employee->editClient(id, name , password , balance);
    f.updateClients();
    f.getAllData();
}

void EmployeeManager::searchForClient(Employee *employee) {
    int id;
    cout <<"Please Enter The Client's Id : \n";
    cin >> id;
    Client * c = employee->searchClient(id);
    if (c) {
       c->display();
    }
    else
       cout <<"Client not Found " << endl;
}

Employee *EmployeeManager::login(int id, string password) {
    for(int i = 0 ; i <Employee::employeelist.size(); i++) {
        if (Employee::employeelist[i].getId() == id && Employee::employeelist[i].getPassword() == password) {
            return &Employee::employeelist[i];
        }
    }
    return nullptr;
}

bool EmployeeManager::employeeOptions(Employee *employee) {
    int choose;
    do{
    printEmployeeMenu();
    cin >> choose;
    switch (choose) {
        case 1:
            employee->display();
        break;
        case 2: {
            string newPassword;
            cout << "Enter new password: ";
            cin >> newPassword;
            updatePassword(employee, newPassword);
            cout << "Password updated successfully.\n";
            break;
        }
        case 3:
            newClient(employee);
        break;
        case 4:
            searchForClient(employee);
        break;
        case 5:
            listAllClients(employee);
        break;
        case 6:
            editClientInfo(employee);
        break;
        case 7:
            cout << "Logging out...\n";
        return true;
        default:
            cout << "Invalid choice, please try again.\n";

    }
}while (choose !=7);
    return false;
}

