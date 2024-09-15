//
// Created by rober on 9/7/2024.
//
#include <string>
#include"Client.h"
#include"Employee.h"
#include"Admin.h"
#ifndef PARSER_H
#define PARSER_H
class Parser {
private:
    static vector<string> split(string line);
public:
    static Client parseToClient(string line);
    static Employee parseToEmployee(string line);
    static Admin parseToAdmin(string line);
};
#endif //PARSER_H
