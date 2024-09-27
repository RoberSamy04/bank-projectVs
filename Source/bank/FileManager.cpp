// //
// // Created by rober on 9/6/2024.
// //
#include "bank/FileManager.h"
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

//get All the data from filles store it in the vector
void FileManager::getAllData(){
    getAllClients();
    getAllEmployees();
    getAllAdmins();
}

//put all the vector<Client> data in the clientfile
void FileManager::updateClients(){
    removeAllClients();
    for(Client::cit = Client::clientlist.begin(); Client::cit!=Client::clientlist.end();++Client::cit){
        addClient(*Client::cit);
    }
}

//put all the vector<Employee> data in the Employeefile
void FileManager::updateEmployees(){
    removeAllEmployees();
    for(Employee::eit = Employee::employeelist.begin(); Employee::eit!= Employee::employeelist.end(); ++Employee::eit){
        addEmployee(*Employee::eit);
    }
}

//put all the vector<Admin> data in the Adminfile
void FileManager::updateAdmins(){
    removeAllAdmins();
    for(Admin::ait = Admin::adminslist.begin(); Admin::ait != Admin::adminslist.end(); ++Admin::ait){
        addAdmin(*Admin::ait);
    }
}