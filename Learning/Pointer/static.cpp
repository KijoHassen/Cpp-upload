#include <iostream>
using namespace std;

int* method();

int main(){
    
    int* p = method();

    printf("wait for cleaning the memory\n");
    printf("wait for cleaning the memory\n");
    printf("wait for cleaning the memory\n");
    printf("wait for cleaning the memory\n");
    printf("wait for cleaning the memory\n");
    printf("wait for cleaning the memory\n");

    printf("%d\n", *p);

    system ("pause");
    return 0;
}

int* method()
{
    static int a = 10; //加上static的变量不会被内存自动回收
    return &a;
}