#include<iostream>
using namespace std;

#include<stdio.h>
#include<stdlib.h>

#include<math.h>


int main(){
    
    long double money, year, rate;
    scanf("%llf %llf %llf", &money, &year, &rate);
    double interest = money * pow(1 + rate, year) - money;
    printf("interest = %.2f", interest);

    system("pause");
    return 0;
}
