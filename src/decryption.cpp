#include "decryption.h"
#include <fstream>
#include <iostream>
using namespace std;
#include <string>
void Decryption::decrypt()
{
    string line;
    string decoded;
    char ch;
    ifstream file("data/encrypted.txt");
    if (!file.is_open()) {
        cout << "Error opening file" << endl;
        return;
    }
    while (getline(file, line)) {
        
        for (int i = 0; i < line.length(); i++)
        {
            ch = line[i];
            if (ch >= 'A' && ch <= 'Z')
            {
                ch = ((ch - 'A' - 3 + 26) % 26) + 'A';
              decoded += ch;
            }
            else if (ch >= 'a' && ch <= 'z')
            {
                ch = ((ch - 'a' - 3 + 26) % 26) + 'a';
                decoded += ch;
            }
            else
            {
                decoded += ch;
            }
        }
        cout << endl;
    }
    ofstream outputFile("data/decrypted.txt");
    outputFile << decoded;
    outputFile.close();
    cout << "Decryption completed. Decrypted text saved to data/decrypted.txt" << endl;

}