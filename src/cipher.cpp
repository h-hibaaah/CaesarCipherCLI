#include "cipher.h"
#include "encryption.h"
#include "decryption.h"
#include<iostream>
using namespace std;
void cipher::fun_choice()
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
        Encryption obj1;
            obj1.encrypt();
            break;
        }
        case 2:
        {    Decryption obj2;
            obj2.decrypt();
        break;
        }
        case 3:
        {
            exit(0);
        }
        default:
        cout<<"Invalid Choice!";
    }
    }
}