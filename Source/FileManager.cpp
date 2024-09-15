//
// Created by rober on 9/6/2024.
//
#include "FileManager.h"
#include "Client.h"
#include "FilesHelper.h"
#include "Employee.h"
#include "Admin.h"
#include <vector>
#include <string>
using namespace  std;

//AddClients to the txt file
void FileManager::addClient(Client client) {
    FilesHelper::saveClient(client);
}

//AddEmployees to the txt file
void FileManager::addEmployee(Employee employee) {
    FilesHelper::saveEmployee( "EmployeeFile.txt", "eIdFile.txt",employee);
}

//AddAdmin to the txt file
void FileManager::addAdmin(Admin admin) {
    FilesHelper::saveAdmin("AdminFile.txt" , "aIdFile.txt" , admin);
}

//store all the Clients in vector
vector<Client> FileManager::getAllClients() {
    FilesHelper::getClients();
    return clientlist;
}

//store all the Employees in vector
vector<Employee> FileManager::getAllEmployees() {
    FilesHelper::getEmployees();
    return  employeelist;
}

//store all the Admins in vector
vector<Admin> FileManager::getAllAdmins() {
    FilesHelper::getAdmins();
    return  adminslist;
}

//remove all Clients in the txt file
void FileManager::removeAllClients() {
    FilesHelper::clearFile("ClientFile.txt","cIdFile.txt");
}

//remove all Employees in the txt file
void FileManager::removeAllEmployees() {
    FilesHelper::clearFile("EmployeeFile.txt","eIdFile.txt");
}

//remove all Admins in the txt file
void FileManager::removeAllAdmins() {
    FilesHelper::clearFile("AdminFile.txt" ,"aIdFile.txt");
}