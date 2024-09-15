//
// Created by rober on 9/14/2024.
//
#include "FilesHelper.h"
#include<fstream>
#include<iostream>
#include <string>
#include "Parser.h"
#include "Client.h"
#include "Employee.h"
void FilesHelper::saveLast(string fileName, int id) {
    fstream filetxt;
    if (fileName == "cIdFile.txt")
        filetxt.open("cIdFile.txt" , ios::out );

    else if (fileName == "eIdFile.txt")
        filetxt.open("eIdFile.txt" , ios::out);

    else if (fileName == "aIdFile.txt")
        filetxt.open("aIdFile.txt" , ios::out);

    else
        cout << "Invalid File name" << endl;

    if (filetxt.is_open()) {
        filetxt <<id ;
        filetxt.close();
    }
    else
        cout << "Error opening file" << endl;
}


int FilesHelper::getLast(string fileName){
    fstream filetxt;
    int id;
    if (fileName == "cIdFile.txt")
         filetxt.open("cIdFile.txt" );

    else if (fileName == "eIdFile.txt")
         filetxt.open("eIdFile.txt");

    else if (fileName == "aIdFile.txt")
         filetxt.open("aIdFile.txt");

    else
        throw runtime_error("Invalid File name");

    if ( filetxt.is_open()) {
         filetxt >> id;
         filetxt.close();
        return  id;
    }
    else
        throw runtime_error("Error opening file");

}


void FilesHelper::saveClient(Client client) {
    int id =getLast("cIdFile.txt");
    fstream ClientFile("ClientFile.txt" , ios::app);
    if (ClientFile.is_open()) {
        ClientFile << id++ << ","<<client.getName() <<","<<client.getPassword()<<","<<client.getBalance()<<"\n";
        ClientFile.close();
    }
    else
        cout<<"there is an error in the AddClient FileManager " << endl;

    saveLast("cIdFile.txt" , id);
}


void FilesHelper::saveEmployee(string fileName, string lastIdFile, Employee employee) {
    int id = getLast(lastIdFile);
    fstream EmployeeFile(fileName ,ios::app );
    if (EmployeeFile.is_open()) {
        EmployeeFile<< id++ <<","<<employee.getName() <<"," <<employee.getPassword()<<"," <<employee.getSalary()<<"\n";
        EmployeeFile.close();
    }
    else
        cout<<"there is an error in the AddEmployee FileManager " << endl;
   saveLast(lastIdFile , id);
}


void FilesHelper::saveAdmin(string fileName, string lastIdFile, Admin admin) {
    int id = getLast(lastIdFile);
    fstream AdminFile(fileName , ios::app);
    if (AdminFile.is_open()) {
        AdminFile << id++ <<"," <<admin.getName() <<"," <<admin.getPassword() <<"," <<admin.getSalary()<<"\n";
        AdminFile.close();
    }
    else
        cout<<"there is an error in the AddAdmin FileManager " << endl;
    saveLast(lastIdFile , id);
}


void FilesHelper::getClients() {
    string line;
    fstream ClientFile("ClientFile.txt");
    if (ClientFile.is_open()) {
        while (getline(ClientFile , line)) {

            Client client = Parser::parseToClient(line);
            clientlist.push_back(client);
        }
        ClientFile.close();
    }
    else
        cout<<"there is an error in the getClients FileManager " << endl;
}

void FilesHelper::getEmployees() {
    string line;
    fstream EmployeeFile("EmployeeFile.txt");
    if (EmployeeFile.is_open()) {
        while (getline(EmployeeFile,line)) {
            Employee employee = Parser::parseToEmployee(line);
            employeelist.push_back(employee);
        }
        EmployeeFile.close();
    }
    else
        cout<<"there is an error in the getEmployees FileManager " << endl;
}


void FilesHelper::getAdmins() {
    string line;
    fstream AdminFile("AdminFile.txt");
    if (AdminFile.is_open()) {
        while (getline(AdminFile,line)) {
            Admin admin = Parser::parseToAdmin(line);
            employeelist.push_back(admin);
        }
        AdminFile.close();
    }
    else
        cout<<"there is an error in the getAdmins FileManager " << endl;
}


void FilesHelper::clearFile(string fileName, string lastIdFile) {
    fstream filetxt(fileName , ios::out) , fileid(lastIdFile ,ios::out);
    if (filetxt.is_open()) {
        filetxt.close();
    }
    else
        cout<<"there is an error in the clearFile FileManager " << endl;
    if (fileid.is_open()) {
        fileid <<1;
        fileid.close();
    }
    else
        cout<<"there is an error in the clearFile FileManager " << endl;


}