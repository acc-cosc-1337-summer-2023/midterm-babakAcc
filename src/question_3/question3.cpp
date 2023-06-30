#include "question3.h"

bool test_config()
{
    return true;
}

double get_sales(double sales)
{
    double commission = 0.0;

    if(sales > 0 && sales < 500)
    {
        commission = sales * 0.05;
    }
    else if(sales >= 500 && sales < 1000 )
    {
        commission = sales * 0.06;
    }
    else if(sales >= 1000 && sales < 1500)
    {
        commission = sales * 0.07;
    } 
    else if(sales >= 1500)
    {
        commission = sales * 0.08;
    }
    else if (sales <= 0)
    {
        commission = 0;
    }

    return commission;
}