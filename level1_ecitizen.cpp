// Level 1 - Login Validation (C++)
#include <iostream>
using namespace std;

int main() {
    string correctUsername = "adminKE";
    string correctPassword = "254Secure";

    string username, password;

    cout << "Enter username: ";
    cin >> username;

    cout << "Enter password: ";
    cin >> password;

    if (username == correctUsername && password == correctPassword) {
        cout << "Access Granted";
    } else {
        cout << "Invalid Credentials";
    }

    return 0;
}