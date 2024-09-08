//
// Created by rober on 9/6/2024.
//
#include "FileManager.h"
#include "Client.h"
#include <fstream>
#include<iostream>
#include "Employee.h"
#include "Admin.h"
#include <vector>
#include <string>
using namespace  std;

//AddClients to the txt file
void FileManager::addClient(Client &client) {
 ofstream ClientFile("ClienFile.txt" , ios::app);
 if (ClientFile.is_open()) {
  ClientFile << client.getId() << ","<<client.getName() <<","<<client.getPassword()<<","<<client.getBalance()<<"\n";
  ClientFile.close();
 }
 else
  cout<<"there is an error in the AddClient FileManager " << endl;
}

//AddEmployees to the txt file
void FileManager::addEmployee(Employee& employee) {
 ofstream EmployeeFile("EmployeeFile.txt" ,ios::app );
 if (EmployeeFile.is_open()) {
 EmployeeFile<< employee.getId() <<","<<employee.getName() <<"," <<employee.getPassword()<<"," <<employee.getSalary()<<"\n";
  EmployeeFile.close();
 }
 else
  cout<<"there is an error in the AddEmployee FileManager " << endl;
}

//AddAdmin to the txt file
void FileManager::addAdmin(Admin &admin) {
 ofstream AdminFile("AdminFile.txt" , ios::app);
 if (AdminFile.is_open()) {
  AdminFile <<admin.getId() <<"," <<admin.getName() <<"," <<admin.getPassword() <<"," <<admin.getSalary()<<"\n";
  AdminFile.close();
 }
 else
  cout<<"there is an error in the AddAdmin FileManager " << endl;
}

vector<Client> FileManager::getAllClients() {

}

vector<Employee> FileManager::getAllEmployees() {

}

vector<Admin> FileManager::getAllAdmins() {

}

void FileManager::removeAllClients() {

}

void FileManager::removeAllEmployees() {

}

void FileManager::removeAllAdmins() {

}