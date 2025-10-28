#include<iostream>
using namespace std;

#include<stdio.h>
#include<stdlib.h>


int main(){
    int len_cm;
    scanf("%d", &len_cm);
    double temp = len_cm / 30.48;
    int foot = (int)temp;
    int inch = (int)((temp - foot) * 12);
    
    printf("%d %d", foot, inch);

    system("pause");
    return 0;
}
