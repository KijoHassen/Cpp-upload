#include <iostream>
#include <math.h>

int main()
{
    double a,b;
    scanf("%lf%lf",&a,&b);
    printf("%lf\n",root(a,b));
    return 0;
}
double root(double x, double y)
{
    if (x>=y) return sqrt(x-y);
    else return 0;
}