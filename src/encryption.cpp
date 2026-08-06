#include "encryption.h"
#include <fstream>
#include <iostream>
using namespace std;
#include <string>
void Encryption::encrypt()
{
    char ch;
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
        ch = line[i];
        if (ch >= 'A' && ch <= 'Z')
        {
            ch = ((ch - 'A' + 3))% 26 + 'A';
            coded += ch;
        }
         else if (ch >= 'a' && ch <= 'z')
        {
            ch = ((ch - 'a' + 3))% 26 + 'a';
            coded += ch;
        }
        else
        {
            coded += ch;
        }
     }
}
ofstream outputFile("data/encrypted.txt");
outputFile << coded;
outputFile.close();
cout << "Encryption completed. Encrypted text saved to data/encrypted.txt" << endl;
}