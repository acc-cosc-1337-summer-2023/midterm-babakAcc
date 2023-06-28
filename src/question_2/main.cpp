#include "question2.h"
#include<iostream>

using std::cout; using std::cin; using std::string;

int main()
{
    int number;
    char keep_working;

    do
    {

        bool result;

        cout<<"Enter a number: ";
        cin>>number;

        if(number < 1 || number > 60)
        {
            cout<<"Please enter a number in the range of 1 to 60\n";
        }
        else
        {
            result = is_prime(number);

            if(result == true)
            {
                cout<<"The number you entered is a prime number\n";
                get_primes(number);
            }
            else
            {
                cout<<"The number you entered is not a prime number\n";
                get_primes(number);
            }
        }

        cout<<"Do you want to enter another number?:(y/n) ";
        cin>>keep_working;

    } while (keep_working == 'y' || keep_working == 'Y');
    

    return 0;
}