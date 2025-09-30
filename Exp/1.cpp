#include<iostream>

int main(){
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int sum = a + b + c + d;
    double average = sum / 4.0; //4.0浮点结果，4整除
    printf("Sum = %d; Average = %.1f", sum, average);

    system("pause");
    return 0;
}
