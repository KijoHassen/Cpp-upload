#include <iostream>
using namespace std;
//定义一个函数，将两数相除获取余数

int getRemain(int num1, int num2, int * res_fp);

int main(){
    
    int a = 10;
    int b = 3;
    int res_ap = 0;

    int flag = getRemain(a, b, &res_ap);

    //判断状态
    if(!flag)//fllag为0，非0为真，可以输出
    {
        printf("%d\n", res_ap);
    }
    else
    {
        printf("Error\n");
    }

    system ("pause");
    return 0;
}

//返回值表示计算的状态，0正常，非0不正常
int getRemain(int num1, int num2, int * res_fp)
{
    if(num2 == 0)
    {
        return 1;
    }
    *res_fp = num1 % num2;
    return 0;
}