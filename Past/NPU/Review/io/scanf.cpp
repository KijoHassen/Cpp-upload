#include <iostream>
using namespace std;

int main(){
    
    int a = 0;
    int b = 0; 
    int* pa = &a;

    scanf("%d\n", &a);
    scanf("b=%d\n", &b); // 输入格式必须为b=?
    scanf("%d", pa); // 指针就是地址了，不要写&pa

    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", *pa);

    system ("pause");
    return 0;
}