#include <iostream>
#include <math.h>

double root(double x, double y)
{
    if (x>=y) return sqrt(x-y);
    else printf("Illegal Arguments");
    return 0;
}
int main()
{
    double a,b;
    scanf("%lf%lf",&a,&b);
    printf("%lf\n", root(a,b));
}