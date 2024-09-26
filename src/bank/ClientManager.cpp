//
// Created by rober on 9/22/2024.
//
#include "bank/ClientManager.h"

void ClientManager::printClientMenu() {
    cout << " (1) Display My Info \n";
    cout << " (2) Check Balance \n";
    cout << " (3) Update Password\n";
    cout << " (4) WithDraw \n";
    cout << " (5) Deposit \n";
    cout << " (6) Transfer Amount \n";
    cout << " (7) Logout \n";
    cout <<"\n";
    cout <<"Please choose a Number  : ";
}

void ClientManager::updatePassword(Person *person  , const string &line) {

    person->setPassword(line);
}

Client *ClientManager::login(int id, string password) {
    for(int i = 0; i < Client::clientlist.size(); i++) {
        if (Client::clientlist[i].getId() == id && Client::clientlist[i].getPassword() == password) {
            return &Client::clientlist[i];
        }
    }
    return  nullptr;
}

//implement the ClientMenu
bool ClientManager::clientOptions(Client *client) {
    int choose;
    do {
        printClientMenu();
        cin >> choose;
        switch (choose) {
            case 1: {
                client->display();
                system("PAUSE");
            }
            break;
            case 2: {
                client->checkBalance();
                system("PAUSE");
            }
            break;
            case 3: {
                string newPassword;
                cout << "Enter new password: ";
                cin >> newPassword;
                updatePassword(client, newPassword);
                cout << "Password updated successfully.\n";
                break;
            }
            case 4:{
                double amount;
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                client->withdraw(amount);
            }
            break;
            case 5: {
                double amount;
                cout << "Enter amount to Deposit: ";
                cin >> amount;
                client->deposit(amount);
            }
            break;
            case 6: {
                int recipientId;
                double amount;
                cout << "Enter recipient's ID: ";
                cin >> recipientId;
                Employee e;
                Client *recipient = e.searchClient(recipientId);
                if (recipient == nullptr) {
                    cout << "Recipient not found.\n";
                    break;
                }
                cout << "Enter amount to transfer: ";
                cin >> amount;
                client->transferTo(amount, *recipient);
                break;
            }
            case 7:
            return true;
            default:
                cout << "Invalid choice, please try again.\n";
        }
    } while (choose !=7);
    return false;
}


