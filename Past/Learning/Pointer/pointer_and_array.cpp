#include <iostream>

int main(){
    //用指针访问数组元素
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int *p = arr;//数组名就是数组的首地址
    
    printf("%d\n", *p);
    p++; //指针地址加1，就是偏移4个字(节
    printf("%d\n", *p);

    //遍历
    int *p2 = arr;

    for(int i=0; i<10; i++)
    {
        printf("%d\n", *p2);
        p2++;
    }

    system ("pause");
    return 0;
}