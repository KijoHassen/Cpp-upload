#include <iostream>

int main(){
    //快速创建、指向
    int a = 10;
    int *p = &a;

    printf("%d\n", sizeof(p));

    system ("pause");
    return 0;
}