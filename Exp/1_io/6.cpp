#include<stdio.h>
#include<stdlib.h>

int main(){
    
    double f1,f2;
    int i;
    char c;

    scanf("%lf %d %c %lf", &f1,&i,&c,&f2);

    printf("%c %d %.2lf %.2lf", c,i ,f1 ,f2);

    system("pause");
    return 0;
}
