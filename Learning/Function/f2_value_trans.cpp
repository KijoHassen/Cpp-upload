//值传递
#include <iostream>

void swap(int num1, int num2)//不需要返回值
{
    printf("Before swap: %d, %d\n", num1, num2);

    int temp = num1;
    num1 = num2;
    num2 = temp;

    printf("After swap: %d, %d\n", num1, num2);

    return;//没有返回值，或者不用写
}

int main(){
    
    int a = 10;
    int b = 20;
    printf("a=%d, b=%d\n",a,b);

    swap(a,b);

    printf("a=%d, b=%d\n",a,b);

    system ("pause");
    return 0;
}
/*输出结果：
a=10, b=20
Before swap: 10, 20
After swap: 20, 10
a=10, b=20
主函数值传递给其他函数，形参的改变不影响实参
*/
/*
原理: 栈
内存空间：
_________
|a=10   |
|b =20  |
|num1=  |
|num2=  |
|temp=  |
|       |
|       |
   ...
*/