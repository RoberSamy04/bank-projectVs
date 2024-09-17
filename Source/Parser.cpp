//
// Created by rober on 9/7/2024.
//
#include "Parser.h"
#include <string>
#include<sstream>
#include <iostream>
#include"Client.h"
#include"Employee.h"
#include"Admin.h"
vector<string> Parser::split(string line) {
    vector<string> result; // creat an empty vector to store the data members
    stringstream s(line); //creat a string_stream  to handle the input string
    string members;   //creat a string variable  that will hold each split part
    while (getline(s , members,',')) {
        result.push_back(members);
    }
    return result;
}

Client Parser::parseToClient(string line) {
    Client c;
    vector<string> data = split(line);
    c.setId(stoi(data[0])); //stoi method Convert string to int
    c.setName(data[1]);
    c.setPassword(data[2]);
    c.setBalance(stod(data[3])); //stod method Convert string to double
    return c;
}

Employee Parser::parseToEmployee(string line) {
    Employee e;
    vector<string> data = split(line);
    e.setId(stoi(data[0]));
    e.setName(data[1]);
    e.setPassword(data[2]);
    e.setSalary(stod(data[3]));
    return e;
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