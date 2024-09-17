// //
// // Created by rober on 9/6/2024.
// //
#include "FileManager.h"
#include "Client.h"
#include "Admin.h"
#include "FilesHelper.h"
#include "Employee.h"
#include <vector>
#include <string>
using namespace  std;

//AddClients to the txt file
void FileManager::addClient(Client client)  {
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
void FileManager::getAllClients() {
    FilesHelper::getClients();

}

//store all the Employees in vector
void FileManager::getAllEmployees() {
    FilesHelper::getEmployees();

}

//store all the Admins in vector
void FileManager::getAllAdmins() {
    FilesHelper::getAdmins();

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
