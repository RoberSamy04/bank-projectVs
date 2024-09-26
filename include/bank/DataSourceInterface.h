// Created by rober on 9/6/2024.
#ifndef DATASOURCEINTERFACE_H
#define DATASOURCEINTERFACE_H
#include "Client.h"
#include "Employee.h"
#include "Admin.h"
#include <vector>
using namespace std;
class DataSourceInterface
{
protected:
    virtual void addClient(Client client) = 0;
    virtual void addEmployee(Employee employee) = 0;
    virtual void addAdmin(Admin admin) = 0;
    virtual void getAllClients() = 0;
    virtual void getAllEmployees() = 0;
    virtual void getAllAdmins() = 0;
    virtual void removeAllClients() = 0;
    virtual void removeAllEmployees() = 0;
    virtual void removeAllAdmins() = 0;
};
#endif // DATASOURCEINTERFACE_H
