#include "menu.h"
#include "encryption.h"
#include "decryption.h"
#include<iostream>
using namespace std;
void Menu::showmenu()
{
    while (true)
    {
          cout<<"Enter your choice:"<<endl;
    cout<<"1.Encryption 2.Decryption 3.Exit"<<endl;
    cin>>ch;
       switch (ch)
    {
        case 1:
        {
        Encryption encryptor;
            encryptor.encrypt();
            break;
        }
        case 2:
        {    Decryption decryptor;
            decryptor.decrypt();
        break;
        }
        case 3:
        {
            cout<<"Exiting the program."<<endl;
            return;
        }
        default:
        cout<<"Invalid Choice!";
    }
    }
}