#include "question1.h"
#include<iostream>

using std::cout; using std::cin;
using std::string;


int main()
{
    int number;
    char keep_going;


    do
        {
            cout<<"Enter a number: ";
            cin>>number;
                if(number > 10 || number < 1)
                    {
                        cout<<"Please enter a number between 1 and 10\n";
                    }
                    else 
                    {
                    cout<<"Factorial of "<<number<< " is: "<<get_factorial_sequence(number)<<"\n";
                    }

                    cout<<"Do you want to enter another number?(y / n): ";
                    cin>>keep_going; 

        } while (keep_going == 'y' || keep_going == 'Y');
    

    return 0;
}