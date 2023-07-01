#include "question4.h"
#include<iostream>

using std::string; using std::cout; using std::cin;

int main()
{
    string choice;
    do
    {
        int decimal;
        cout<<"Enter a number: ";
        cin>>decimal;
        if(decimal < 1 || decimal > 255 )
        {
            cout<<"Please enter an integer between 1 and 255\n";
        }
        else
        {
            string binary = decimal_to_binary(decimal);

            cout<<"Binary representation of "<<decimal<< ": "<<binary<< std::endl;

            cout<<"Do you want to convert another number to binary?(y/n): ";
            cin>>choice;
        }
    } while (choice == "y" || choice == "Y");
    



    return 0;
}