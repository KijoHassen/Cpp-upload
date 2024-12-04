#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    
    printf("示例文本\n");
    printf("%d二%d四\n", 1, 2);
    /*
        %c字符 %d十进制整数 %ld十进制longint
        %o八进制整数 %x十六进制整数 
        %f小数 %u无符号整数 %s字符串
    */

   int a = 1234;
    printf("%2d\n", a);   //%2d 至少宽度输出两位，不满足两位补空格
    printf("%d\n", NULL); // NULL是0地址

    system ("pause");
    return 0;
}