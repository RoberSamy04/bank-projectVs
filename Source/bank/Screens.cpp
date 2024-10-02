//
// Created by rober on 9/23/2024.
//
#include "bank/Screens.h"



void Screens::welcome() {
    vector<string> welcome = {

        "                         888                                         \n"
          "Y88b    e    /  e88~~8e  888  e88~~/  e88~-_  888-~88e-~88e  e88~~8e \n",
        " Y88b  d8b  /  d888  88b 888 d888    d888   i 888  888  888 d888  88b\n" ,
        "  Y888/Y88b/   8888__888 888 8888    8888   | 888  888  888 8888__888 \n",
        "   Y8/  Y8/    Y888    , 888 Y888    Y888   ' 888  888  888 Y888    , \n",
        "    Y    Y      '88___/  888  '88__/  '88_-~  888  888  888  '88___/  \n"
    };
    for (const string& line : welcome) {
        cout << line<< flush;
    }
    cout <<endl;
    cout << endl;
    chrono::seconds s(3);
    this_thread::sleep_for(s);

}

void Screens::bankName() {
    vector<string>Name ={
        "8888888b.  8888888888        d8888  .d88888b.  888888b.                     888      \n",
        "888   Y88b 888              d88888 d88P' 'Y88b 888  '88b                    888      \n",
        "888    888 888             d88P888 888     888 888  .88P                    888      \n",
        "888   d88P 8888888        d88P 888 888     888 8888888K.   8888b.  88888b.  888  888 \n",
        "8888888P'  888           d88P  888 888     888 888  'Y88b     '88b 888 '88b 888 .88P\n",
        "888 T88b   888          d88P   888 888     888 888    888 .d888888 888  888 888888K\n",
        "888  T88b  888         d8888888888 Y88b. .d88P 888   d88P 888  888 888  888 888 '88b\n",
        "888   T88b 8888888888 d88P     888  'Y88888P'  8888888P'  'Y888888 888  888 888  888\n",
    };
    for (const string& line : Name) {
        cout << line<< flush;
    }
    chrono::seconds s(5);
    this_thread::sleep_for(s);
    system("cls");

}

void Screens::loginOptions() {
    cout <<"(1) Login as Client \n";
    cout <<"(2) Login as Employee \n";
    cout <<"(3) Login as Admin \n";
    cout <<"\n";
    cout <<"Please choose a Number  : " ;
}
int Screens::loginAs() {
    string input;
    while (true) {
        loginOptions();
        cin >> input;
        system("CLS");
        if (input == "1") {
            return 1;
        }
        else if (input == "2") {
            return 2;
        }
        else if (input == "3") {
            return 3;
        }
        else {
            cout << "Invalid input. Please choose 1, 2, or 3.\n";
        }
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}

void Screens::valid(int options) {
    int id;
    string password;
    while (true) {
        cout << "Please Enter Your Id: "<<flush;
        cin >> id;
        cout << "Please Enter Your Password: "<<flush;
        cin >> password;

        if (options == 1) {
            Client* client = ClientManager::login(id, password);
            if (client) {
                operationscreen(client);
                break;
            }
        }
        else if(options == 2){
            Employee* employee = EmployeeManager::login(id, password);
            if (employee) {
                operationscreen(employee);
                break;
            }
        }
        else if(options == 3){
            Admin* admin = AdminManager::login(id, password);
            if (admin) {
                operationscreen(admin);
                break;
            }
        }

        system("CLS");
        cout << "Invalid ID or PASSWORD\n\n" << flush;
    }
}

void Screens::operationscreen(Client* client) {
    system("CLS");
    bool isLoggedOut = ClientManager::clientOptions(client);
    if (isLoggedOut) {
        logout();
    }
    system("CLS");
}

void Screens::operationscreen(Employee* employee) {
    system("CLS");
    bool isLoggedOut = EmployeeManager::employeeOptions(employee);
    if (isLoggedOut) {
        logout();
    }
    system("CLS");
}

void Screens::operationscreen(Admin* admin) {
    system("CLS");
    bool isLoggedOut = AdminManager::AdminOptions(admin);
    if (isLoggedOut) {
        logout();
    }
    system("CLS");
}

void Screens::logout() {
    system("CLS");
    loginAs();
    system("CLS");
}

void Screens::runApp() {
    FileManager f;
    welcome();
    bankName();
    f.getAllData();
    while (true) {
        int userChoice = loginAs();
        valid(userChoice);

    }

}






