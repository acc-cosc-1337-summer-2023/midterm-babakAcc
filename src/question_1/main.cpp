#include "question1.h"
#include<iostream>

using std::cout; using std::cin;


int main()
{
    int number;

    cout<<"Enter a number: ";
    cin>>number;
    cout<<"Factorial of "<<number<< " is: "<<get_factorial_sequence(number)<<"\n";
    return 0;
}