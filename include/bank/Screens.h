//
// Created by rober on 9/23/2024.
//
#ifndef SCREENS_H
#define SCREENS_H
#include <vector>
#include <iostream>
#include <string>
#include "ClientManager.h"
#include "EmployeeManager.h"
#include "AdminManager.h"
#include "FileManager.h"
#include <chrono>
#include <thread>
#include <stdexcept>
#include <conio.h>
using namespace std;
class Screens {
public:
    static void bankName();
    static void welcome();
    static void loginOptions();
    static int loginAs();
    static void valid(int c);
    static void logout();
    static  void operationscreen(Employee* employee);
    static  void operationscreen(Admin* admin);
    static  void operationscreen(Client* client);
    static void runApp();
};
#endif //SCREENS_H
