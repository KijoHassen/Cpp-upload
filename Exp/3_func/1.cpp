#include<stdio.h>
#include<stdlib.h>

#include<math.h>

int reverse(int number);

int main(){

    int n;

    scanf("%d", &n);
    printf("%d\n", reverse(n));

    system("pause");
    return 0;
}

int reverse(int number){

    int sign = number >= 0 ? 1 : -1;
    number = abs(number); //use abs() when including <math.h>
    //number = number >=0 ? number : -number;
    
    int sum = 0;
    while(number > 0){
        sum = sum * 10 + number % 10;//上一次的和*10 + 本次循环的尾数
        number /= 10;
    }
    
    return sum * sign;
    
}