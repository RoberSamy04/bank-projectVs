//
// Created by rober on 9/22/2024.
//
#ifndef EMPLOYEEMANAGER_H
#define EMPLOYEEMANAGER_H
#include "Person.h"
#include "Employee.h"
#include "FileManager.h"
#include <string>
#include <iostream>
class EmployeeManager {
public:
    static void printEmployeeMenu();
    static void updatePassword(Person* person, const string &line);
    static void newClient(Employee* employee);
    static void listAllClients(Employee* employee);
    static void searchForClient(Employee* employee);
    static void editClientInfo(Employee* employee);
    static Employee* login(int id, string password);
    static bool employeeOptions(Employee* employee);
};
#endif //EMPLOYEEMANAGER_H
