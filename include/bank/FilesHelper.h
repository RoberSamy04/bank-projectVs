//
// Created by rober on 9/14/2024.
//
#ifndef FILESHELPER_H
#define FILESHELPER_H
#include <string>
#include "Admin.h"
#include "Client.h"
#include "Employee.h"
class FilesHelper{
private:
    static void saveLast(string fileName, int id);
public:
    static int getLast(string fileName);
    static void saveClient(Client c);
    static void saveEmployee(string fileName, string lastIdFile, Employee employee);
    static void saveAdmin(string fileName, string lastIdFile, Admin admin);
    static void getClients();
    static void getEmployees();
    static void getAdmins();
    static void clearFile(string fileName, string lastIdFile);

};
#endif //FILESHELPER_H
