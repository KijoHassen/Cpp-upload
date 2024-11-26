#include <iostream>
using namespace std;

int main(){
    
    //全局区

    //全局变量、静态变量、常量
    
    //局部变量
    int a = 10;
    int b = 20;

    cout << "Addr of a" << (long long)&a << endl;
    cout << "Addr of b" << (long long)&b << endl;


    system ("pause");
    return 0;
}