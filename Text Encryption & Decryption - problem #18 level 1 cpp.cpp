#include <iostream>
#include <string>

using namespace std;

string inputText(string message)
{
    string text;

    cout << message;

    cin.ignore(); 

    getline(cin, text);

    return text;
}

string encrypt(string text, int key)
{
    string result = "";

    for (int i = 0; i < text.size(); i++)
    {
        char c = text[i] + key;
        result += c;
    }
    return result;
}

string decrypt(string text, int key)
{
    string result = "";

    for (int i = 0; i < text.size(); i++)
    {
        char c = text[i] - key;
        result += c;
    }
    return result;
}

int main()
{
    int choice;
    string input;
    int key;

    cout << "====== MENU =====" << endl;
    cout << "1. Encrypt text" << endl;
    cout << "2. Decrypt text" << endl;
    cout << "\nYour choice: ";
    cin >> choice;

    cout << "Enter encryption key (number): ";
    cin >> key;

    if (choice == 1)
    {
        input = inputText("Enter original text: ");
        string encrypted = encrypt(input, key);
        cout << "Encrypted text: " << encrypted << endl;
    }
    else if (choice == 2)
    {
        input = inputText("Enter encrypted text: ");
        string decrypted = decrypt(input, key);
        cout << "Decrypted text: " << decrypted << endl;
    }
    else
    {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}