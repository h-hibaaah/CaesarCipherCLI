#include "decryption.h"
#include <fstream>
#include <string>
#include <iostream>
using namespace std;
void Decryption::decrypt()
{
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
    string line;
    string decoded;
    char currentchar;
    ifstream file("data/encrypted.txt");
    if (!file.is_open()) {
        cout << "Error opening file" << endl;
        return;
    }
    while (getline(file, line)) {
        
        for (int i = 0; i < line.length(); i++)
        {
            currentchar = line[i];
            if (currentchar >= 'A' && currentchar <= 'Z')
            {
                currentchar = ((currentchar - 'A' - shift + 26) % 26) + 'A';
              decoded += currentchar;
            }
            else if (currentchar >= 'a' && currentchar <= 'z')
            {
                currentchar = ((currentchar - 'a' - shift + 26) % 26) + 'a';
                decoded += currentchar;
            }
            else
            {
                decoded += currentchar;
            }
        }
        decoded += "\n";    
        cout << endl;
    }
    ofstream outputFile("data/decrypted.txt");
    outputFile << decoded;
    outputFile.close();
    cout << "Decryption completed. Decrypted text saved to data/decrypted.txt" << endl;

}