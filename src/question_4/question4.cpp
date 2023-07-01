//
#include "question4.h"
#include<iostream>

using std::string;

bool test_config()
{
    return true;
}



string decimal_to_binary(int num)
{

    string binary;
        for (int i = 7; i >= 0; --i) {
        int bit = (num >> i) & 1;
        binary.push_back('0' + bit);
    }

    return binary;
}