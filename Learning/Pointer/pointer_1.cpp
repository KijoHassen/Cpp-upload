//指针记录内存地址编号
#include <iostream>

int main(){
    //定义变量
    int a = 10;
    //定义指针 数据类型*指针变量
    int *p;
    //记录a地址
    p = &a;

    printf("%x\n", &a);//a的地址
    printf("%x\n", p);//p指针就是a地址

    //解引用可以使用指针，使用指针指向的内存中的数据
    *p = 1000;
    printf("%d\n", a);//a内存中的数据
    printf("%d\n", *p);//解引用指向a内存中的数据

    system ("pause");
    return 0;
}