#include <stdio.h>
#include "myMath.h"
#include "basicMath.c"
#include "power.c"


int main()
{
    double x;
    double result;

    printf("Please enter a real number: ");
    scanf("%lf", &x);



    //This calculates: f(x)= e^x + x^3 - 2
    result= sub(add(Exponent(x), Power(x, 3)), 2);
    printf("The value of f(x)= e^x + x^3 - 2 at the point %.4lf is: %.4lf\n", x, result);


    //This calculates: f(x)= 3*x + 2*(x^2)
    result= add(mul(x,3),mul(Power(x,2),2));
    printf("The value of f(x)= 3*x + 2*(x^2) at the point %.4lf is: %.4lf\n", x, result);


    //This calculates: f(x)= (4*x^3)/5 - 2*x
    result= sub(div(mul(Power(x,3),4),5),mul(x,2));
    printf("The value of f(x)= (4*x^3)/5 - 2*x at the point %.4lf is: %.4lf\n", x, result);





    return 0;

}
