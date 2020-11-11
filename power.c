#include "myMath.h"
#define EXP 2.7182818 


double Power(double x, int y){
    double result= 1;

    if (y==0)
    {
        return 1;
    }

    else if (y<0)
    {
        y= -y;
        for (int i = 0; i < y; i++)
        {
            result= result * x;
        }
        result= div(1, result);
    }

    else
    {
        for (int i = 0; i < y; i++)
        {
            result= result * x;
        }
    }

    return result;
}


double Exponent(int x){
    double ans= Power(EXP, x);
    return ans;
}