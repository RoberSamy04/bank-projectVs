//
// Created by rober on 9/7/2024.
//
#include "Parser.h"
#include <string>
#include<sstream>
#include"Client.h"
#include"Employee.h"
#include"Admin.h"
vector<string> Parser::split(string line) {
    vector<string> result; // creat an empty vector to store the data members
    stringstream s(line); //creat a stringstream  to handle the input string
    string members;   //creat a string variable  that will hold each split part
    while (getline(s , members,',')) {
        result.push_back(members);
    }
    return result;
}

Client Parser::parseToClient(string line) {
    Client client;
    vector<string> data = split(line);
    client.setId(stoi(data[0])); //stio method Convert string to int
    client.setName(data[1]);
    client.setPassword(data[2]);
    client.setBalance(stod(data[3])); //stod method Convert string to double
    return client;
}

Employee Parser::parseToEmployee(string line) {
    Employee employee;
    vector<string> data = split(line);
    employee.setId(stoi(data[0]));
    employee.setName(data[1]);
    employee.setPassword(data[2]);
    employee.setSalary(stod(data[3]));
    return employee;
}

Admin Parser::parseToAdmin(string line) {
    Admin admin;
    vector<string> data = split(line);
    admin.setId(stoi(data[0]));
    admin.setName(data[1]);
    admin.setPassword(data[2]);
    admin.setSalary(stod(data[3]));
    return admin;
}