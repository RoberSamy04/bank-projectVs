//
// Created by rober on 9/22/2024.
//

#ifndef ADMINMANAGER_H
#define ADMINMANAGER_H
#include "EmployeeManager.h"
#include "Admin.h"
#include <string>
#include "Screens.h"
#include <iostream>
class AdminManager : public EmployeeManager
{
public:
    static void printAdminMenu();
    static Admin *login(int id, string password);
    static bool AdminOptions(Admin *admin);
};
#endif // ADMINMANAGER_H
