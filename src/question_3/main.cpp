#include "question3.h"
#include <iostream>

using std::string; using std::cout; using std::cin;


int main()
{
    char choice;

    do
    {
        double sales;
        cout<<"Enter sales amount to calculate the commission: ";
        cin>>sales;

        double commission = get_sales(sales);

        cout<<"The commission of "<<sales<<" is: "<<commission<<"\n";

        cout<<"Do you want to calculate another commission?(y/n): ";
        cin>>choice;

    } while(choice == 'y' || choice == 'Y');


    return 0;
}