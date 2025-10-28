#include<stdio.h>
#include<stdlib.h>

#include<math.h>


int main(){
    
    double money, year, rate;
    scanf("%lf %lf %lf", &money, &year, &rate);
    double interest = money * pow(1 + rate, year) - money;
    printf("interest = %.2f", interest);

    system("pause");
    return 0;
}
