#include <iostream>
using namespace std;

int main(){
    
    int a=0,b=0,c=0;
    //输入1234567890
    scanf("%2d%3d%4d", &a, &b, &c); // 最多读取n个值
    //不是 12, 123, 1234 的原因 是 scanf 的格式化输入不会自动匹配数字长度，它严格按照指定的字符个数读取输入。
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    system ("pause");
    return 0;
}