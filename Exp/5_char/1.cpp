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

void StringCount(char str[]){
    int count_letters = 0;
    int count_digits = 0;
    int count_blanks = 0;
    int count_others = 0;

    for(int i=0; str[i]!='\0'; i++){ //'\0'是字符串结束标志
        if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z'){ //'a'=97,'z'=122,'A'=65,'Z'=90,字符可以用ascii表示。
            count_letters++;
        }
        else if(str[i]>='0' && str[i]<='9'){
            count_digits++;
        }
        else if(str[i]==' ' || str[i]=='\n'){
            count_blanks++;
        }
        else{
            count_others++;
        }        
    }
    printf("Letters: %d\n", count_letters);
    printf("Digits: %d\n", count_digits);
    printf("Blanks: %d\n", count_blanks);
    printf("Others: %d\n", count_others);
}

int main(){
    char str[MAX];

    ReadString(str);
    StringCount(str);

    system("pause");
    return 0;
}
//arr[n]是角标n对应的元素的值
//arr是指向数组第一个元素的指针
//arr==&arr[0]
//*arr==arr[0]
//arr+m==&arr[m]
//*(arr+m)==arr[m]