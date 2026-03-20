//阶乘
#include<stdio.h>
#include<stdlib.h>

#include<math.h>

double factorial(int n);

int main(void){ //void is unnecessary.

    int i;
    double sum;

    sum = 0;
    for(i=1; i<=10; i++){
        sum = sum + factorial(i);//factorial是double，sum也需要是double
    }

    printf("1!+2!+3!+...+10!=%lf\n", sum);//%lf is for double.

    system("pause");
    return 0;
}

double factorial(int n){
    double result=1;
    for(int i=1; i<=n; i++){
        result *= i;
    }
    return result;
}
