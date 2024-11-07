#include <iostream>

int add(int num1, int num2){//形参

    int sum = num1 + num2;
    return sum;
}

int main(){

    int a = 10;//实参
    int b = 10;
    int res = add(a,b);
    printf("The sum is: %d\n", res);

    system ("pause");
    return 0;
}