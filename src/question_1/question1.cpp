#include "question1.h"
#include <iostream>

using std::cout;

bool test_config()
{
    return true;
}

int get_factorial_sequence(int num)
{
  int result = 1;

  for(int i = 1; i <= num; i++)
  {
    result *= i;
  }
  
  for(int i = 1; i <= num; i++)
  {
    cout<<i;
    
    if(i != num)
    {
        cout<<"x";
    }
  }

  cout<<"=";
  
  return result;



  
}