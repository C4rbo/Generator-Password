#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
#include <random>

using namespace std;

struct opPassword
{
    string szLower = "abcdefghjkmnpqrstuvwxyz";
    string szUpper = "ABCDEFGHJKLMNPQRSTUVWXYZ";
    string num = "23456789";
    string symbol = "!\"#$%&'()*+,-./:;<=>?@[]^_`{}~";
};

void generatePassword(const opPassword& options, vector<string>& passwords, int length, bool includeUpper, bool includeNumbers, bool includeSymbols) {
    string allChars = options.szLower;

    if (includeUpper) allChars += options.szUpper;
    if (includeNumbers) allChars += options.num;
    if (includeSymbols) allChars += options.symbol;
    
    string password = "";
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, allChars.size() - 1);

    for (int i = 0; i < length; ++i) {
        password += allChars[dis(gen)];
    }

    passwords.push_back(password);
    cout << "Generated password: " << password << endl;
}

int main() {
    int choice;
    vector<string> passwords;
    opPassword options;

    cout << "Choose an option:\n";
    cout << "1. Generate numeric password\n";
    cout << "2. Generate password with letters\n";
    cout << "3. Generate complex password\n";
    cout << "4. Exit\n";
    cin >> choice;

    int length;
    bool includeUpper, includeNumbers, includeSymbols;

    switch (choice) {
        case 1:
            cout << "Enter the length of the numeric password: ";
            cin >> length;
            generatePassword(options, passwords, length, false, true, false);
            break;
        case 2:
            cout << "Enter the length of the password with letters: ";
            cin >> length;
            generatePassword(options, passwords, length, true, false, false);
            break;
        case 3:
            cout << "Enter the length of the complex password: ";
            cin >> length;
            cout << "Include uppercase letters? (1 = Yes, 0 = No): ";
            cin >> includeUpper;
            cout << "Include numbers? (1 = Yes, 0 = No): ";
            cin >> includeNumbers;
            cout << "Include symbols? (1 = Yes, 0 = No): ";
            cin >> includeSymbols;
            generatePassword(options, passwords, length, includeUpper, includeNumbers, includeSymbols);
            break;
        case 4:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice.\n";
            break;
    }

    return 0;
}