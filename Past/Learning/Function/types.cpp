#include <iostream>

void f1()//无参无返
{
    printf("This is a test01.\n");
}
void f2(int a)//无参有返
{
    printf("This is a test02. a = %d\n", a);
}
int f3()//有参无返
{
    printf("This is a test03.\n");
    return 1000;
}
int f4(int a)//有参有返
{
    printf("This is a test04. a = %d\n", a);
    return a;
}

int main(){
    
    f1();

    f2(100);

    int num1 = f3();
    printf("num1 = %d\n", num1);

    int num2 = f4(10000);
    printf("num2 = %d\n", num2);
    
    system ("pause");
    return 0;
}