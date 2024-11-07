#include <iostream>

int main()
{
    int a = 10;
    int b = 3;

    printf("%d\n", a/b);
    //int只保留整数部分
    
    double c = 0.75;
    double d = 0.22;

    printf("%.10llf", c/d);

    system ("pause");
    return 0;
}