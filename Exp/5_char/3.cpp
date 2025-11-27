#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define MAX 1000

void ReadString(char str[]){
    if(fgets(str, MAX, stdin) == NULL) {
        str[0] = '\0';
        return;
    }
    size_t len = strlen(str);
    if(len > 0 && str[len-1] == '\n') str[len-1] = '\0';
}

void reverse(char *p){//*p代表首地址，char *p == char str[]，这里既传入了数组名，也完成了指针的初始化
    //<<函数输入的变量名实际上是指向变量的指针>>
    char *q;
    for(q = p; *q != '\0'; q++);//遍历之后q指向结束符'\0'
    q -= 1;
    for(; p<q; p++, q--){
        char temp = *p;
        *p = *q;
        *q = temp;
    }

}

int main(){
    char str[MAX];

    ReadString(str);
    reverse(str);
    puts(str);
    //printf("%s\n", str);

    system("pause");
    return 0;
}
/*
x x x x x x x x \0 
↑             ↑  ↑
p            q-1 q


*/