#include <iostream>
//地址传递

void swap(int *p1, int *p2)
{
    int temp = *p1; //解引用交换值
    *p1 = *p2;
    *p2 = temp;

    return;
}

int main(){
    
    int a = 10;
    int b = 20;
    printf("%d, %d\n", a, b);
    swap(&a, &b); //交换地址
    printf("%d, %d\n", a, b);

    system ("pause");
    return 0;
}