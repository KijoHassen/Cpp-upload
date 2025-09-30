#include <iostream>

//提前声明，声明可以多次声明，定义只能一次
int max(int a, int b);
//调用函数
int main(){
    
    int a = 10;
    int b = 20;
    printf("The bigger one is: %d\n", max(a,b));

    system ("pause");
    return 0;
}
//定义函数
int max(int a, int b)
{
    return a > b ? a : b;
}