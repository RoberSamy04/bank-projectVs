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
#include "FilesHelper.h"
#include <string>
using namespace std;
class FileManager : public DataSourceInterface
{
private:
    void addClient(Client client) override;
    void addEmployee(Employee employee) override;
    void addAdmin(Admin admin) override;
    void getAllClients() override;
    void getAllEmployees() override;
    void getAllAdmins() override;
    void removeAllClients() override;
    void removeAllEmployees() override;
    void removeAllAdmins() override;

public:
    void getAllData();
    void updateClients();
    void updateEmployees();
    void updateAdmins();
};
#endif // FILEMANAGER_H
