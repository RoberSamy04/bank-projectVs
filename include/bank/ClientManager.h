//
// Created by rober on 9/22/2024.
//

#ifndef CLIENTMANAGER_H
#define CLIENTMANAGER_H
#include "Person.h"
#include "Client.h"
#include "Employee.h"
#include <string>
#include <iostream>
class ClientManager {
public:
    static void printClientMenu();
    static void updatePassword(Person* person , const string &line );
    static Client* login(int id, string password);
    static bool clientOptions(Client* client);
};
#endif //CLIENTMANAGER_H
