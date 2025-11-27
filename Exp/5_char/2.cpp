#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    char str[81];//数据类型char是字符数组，可以存放80个字符+1个结束符'\0'
    //str[]调用和arr[]调用类似，str是指向数组第一个元素的指针
    gets(str);//从输入读取一行字符串，存放在str数组中

    int n = strlen(str);//计算字符串长度，不包括结束符'\0'
    for(int i=0, j=n-1; i<j; i++, j--){ //n-1是最后一个字符的下标
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    puts(str);

    system("pause");
    return 0;
}
