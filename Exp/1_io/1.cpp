#include<iostream>
using namespace std;

#include<stdio.h>
#include<stdlib.h>


int main(){
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int sum = a + b + c + d;
    double average = sum / 4.0; //4.0浮点结果，4整除
    printf("Sum = %d; Average = %.1f\n", sum, average);
    cout << "abc" << sizeof(long double) << endl;

    system("pause");
    return 0;
}
