#include "encryption.h"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;
void Encryption::encrypt()
{
    char currentchar;
     int shift;
while (true)
{
    cout << "Enter shift value: ";

    cin >> shift;

    if (cin.fail())
    {
        cout << "Invalid input! Please enter a number.\n";

        cin.clear(); // Error state remove
        cin.ignore(1000, '\n'); // Wrong input discard
    }
    else
    {
        break; // Valid input
    }
}
    string coded;
    ifstream file("data/input.txt");
    string line;
    if (!file.is_open()) {
        cout << "Error opening file" << endl;
        return;
    }
while (getline(file, line))
{
     for (int i = 0; i < line.length(); i++)
     {
        currentchar = line[i];
        if (currentchar >= 'A' && currentchar <= 'Z')
        {
            currentchar = ((currentchar - 'A' + shift))% 26 + 'A';
            coded += currentchar;
        }
         else if (currentchar >= 'a' && currentchar <= 'z')
        {
            currentchar = ((currentchar - 'a' + shift))% 26 + 'a';
            coded += currentchar;
        }
        else
        {
            coded += currentchar;
        }
    
     }
       coded+="\n";
}
ofstream outputFile("data/encrypted.txt");
outputFile << coded;
outputFile.close();
cout << "Encryption completed. Encrypted text saved to data/encrypted.txt" << endl;
}