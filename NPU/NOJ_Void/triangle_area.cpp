#include <iostream>
#include <math.h>

int main()
{
    double a,b,c;
    printf("Input three lengths:");
    scanf("%lf%lf%lf",&a,&b,&c);
    double temp,area;
    
    if(a+b>c&&a+c>b&&b+c>a)
    {
        temp = (a+b+c)/2;
        area =sqrt(temp*(temp-a)*(temp-b)*(temp-c));
    }
    else
    {
        printf("Error!Illegal arguments.\n");
        return 1;
    } 
    
    printf("The area is %lf\n", area);

    system("pause");
    return 0;
}