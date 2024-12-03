#include <iostream>

int main(){
    
    int arr[5] = {0,1,2,3,};
    for(int i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }

//取地址
    printf("%d\n", arr); //%d强转为十进制
    printf("%x\n", arr); //十六进制表示

    printf("%x %d\n", &arr[0], &arr[0]); //取第一个元素地址，应和数组地址一样
    printf("%x %d\n", &arr[1], &arr[1]); //int占四个字节，地址正好差4个数
    
    system ("pause");
    return 0;
}