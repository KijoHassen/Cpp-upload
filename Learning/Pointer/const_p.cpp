#include <iostream>

int main(){
    //常量指针
    int a = 10;
    int b = 20;
    const int *p = &a;
    //*p = 30; 常量指针指向的值不可以改
    p = &b; //指针指向可以改 

    //指针常量
    int *const q = &a;
    *q = 30;//指针指向的值可以改
    //q = &b;//指针指向不可以改

    //
    const int *const r = &a;
    //指针指向和指针指向的值都不可以改
    

    system ("pause");
    return 0;
}