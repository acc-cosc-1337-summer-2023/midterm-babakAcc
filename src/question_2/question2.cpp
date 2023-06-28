#include "question2.h"

#include<vector>

#include<iostream>

using std::cout;


bool test_config()
{
    return true;
}

bool is_prime(int number)
{
    if(number <= 1)
    {
        return false;
    }

    for(int i = 2; i * i <= number; i++ )
    {
        if(number % i == 0)
        {
            return false;
        }
    }
    return true;
}

vector<int> get_primes(int num)
{
    vector<int> primes;

    for(int i = 2; i <= num; ++i) 
    {
        if (is_prime(i))
        {
            primes.push_back(i);
        }
    }
    
    cout<<"The prime vector is: ""\n";
    for (size_t i = 0; i < primes.size(); ++i)
    {
        cout<<primes[i];

        if(i != primes.size() - 1)
        {
            cout<<" ";
        }
    }

    cout<<"\n";
    return primes;
}