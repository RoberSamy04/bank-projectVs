//
// Created by rober on 9/6/2024.
//

#ifndef FILEMANAGER_H
#define FILEMANAGER_H
#include "Client.h"
#include "Employee.h"
#include "Admin.h"
#include "DataSourceInterface.h"
#include <vector>
using namespace std;
class FileManager : public DataSourceInterface {
public:
     void addClient(Client& client) override;
     void addEmployee(Employee& employee) override;
     void addAdmin(Admin& admin) override;
     vector<Client> getAllClients()override ;
     vector<Employee> getAllEmployees() override;
     vector<Admin> getAllAdmins()override ;
     void removeAllClients() override;
     void removeAllEmployees() override;
     void removeAllAdmins() override;
};
#endif //FILEMANAGER_H
