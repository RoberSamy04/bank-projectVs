#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;
class Client {
public:
    int id;
    string name;
};
class Employee {
public:
    int id;
    string name;
};
class Admin {
public:
    int id;
    string name;
};

class FilesHelper {
public:
    static void saveLast(string fileName, int id) {
        ofstream file(fileName);
        file << id;
    }

    static int getLast(string fileName) {
        ifstream file(fileName);
        int id;
        file >> id;
        return id;
    }

    static void saveClient(Client c) {
        ofstream file("clients.txt", ios::app);
        file << c.id << "," << c.name << endl;
    }

    static void saveEmployee(string fileName, string lastIdFile, Employee e) {
        ofstream file(fileName, ios::app);
        file << e.id << "," << e.name << endl;
        saveLast(lastIdFile, e.id);
    }

    static vector<Client> getClients() {
        vector<Client> clients;
        ifstream file("clients.txt");
        string line;
        while (getline(file, line)) {
            stringstream ss(line);
            Client c;
            string id, name;
            getline(ss, id, ',');
            getline(ss, name, ',');
            c.id = stoi(id);
            c.name = name;
            clients.push_back(c);
        }
        return clients;
    }

    static vector<Employee> getEmployees() {
        vector<Employee> employees;
        ifstream file("employees.txt");
        string line;
        while (getline(file, line)) {
            stringstream ss(line);
            Employee e;
            string id, name;
            getline(ss, id, ',');
            getline(ss, name, ',');
            e.id = stoi(id);
            e.name = name;
            employees.push_back(e);
        }
        return employees;
    }

    static vector<Admin> getAdmins() {
        vector<Admin> admins;
        ifstream file("admins.txt");
        string line;
        while (getline(file, line)) {
            stringstream ss(line);
            Admin a;
            string id, name;
            getline(ss, id, ',');
            getline(ss, name, ',');
            a.id = stoi(id);
            a.name = name;
            admins.push_back(a);
        }
        return admins;
    }

    static void clearFile(string fileName, string lastIdFile) {
        ofstream file(fileName, ios::trunc);
        saveLast(lastIdFile, 0);
    }
};

int main() {
    FilesHelper::saveLast("last_id.txt", 10);
    int lastId = FilesHelper::getLast("last_id.txt");
    cout << "Last ID: " << lastId << endl;

    Client c1 = {1, "ahmed saad"};
    FilesHelper::saveClient(c1);

    Employee e1 = {1, "ahmed saad"};
    FilesHelper::saveEmployee("employees.txt", "last_id.txt", e1);

    vector<Client> clients = FilesHelper::getClients();
    vector<Employee> employees = FilesHelper::getEmployees();

    for (const auto& c : clients) {
        cout << "Client ID: " << c.id << ", Name: " << c.name << endl;
    }

    for (const auto& e : employees) {
        cout << "Employee ID: " << e.id << ", Name: " << e.name << endl;
    }

    return 0;
}
