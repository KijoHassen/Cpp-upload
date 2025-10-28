#include<iostream>
using namespace std;

#include<stdio.h>
#include<stdlib.h>


int main(){
    int fahr = 100;
    int celsius = (int)(5.0 * (fahr - 32.0) / 9.0);

    printf("fahr = %d, celsius = %d\n", fahr, celsius);

    system("pause");
    return 0;
}
