#include <iostream>
using namespace std;

//全局变量 不在函数体内的变量
int g_a = 10;
int g_b = 20;

int main(){
    
    //全局区

    //全局变量、静态变量、常量
    
    //局部变量
    int a = 10;
    int b = 20;

    cout << "Addr of a " << (long long)&a << endl;
    cout << "Addr of b " << (long long)&b << endl;

    cout << "Addr of g_a " << (long long)&g_a << endl;
    cout << "Addr of g_b " << (long long)&g_b << endl;

    static int s_a = 114514;
    static int s_b = 1919810;

    cout << "Addr of s_a " << (long long)&s_a << endl;
    cout << "Addr of s_b " << (long long)&s_b << endl;

    //全局变量和静态变量地址很近

    //字符串常量
    cout << "Addr of the string is " << (long long)&"hello world" << endl;

    system ("pause");
    return 0;
}