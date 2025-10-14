#include<iostream>
using namespace std;

#include<stdio.h>
#include<stdlib.h>


int main(){
    int x = 152;
    int a = x % 10;//个位对10取余
    int b = (x / 10) % 10;//十位整除10 再对10取余
    int c = x / 100;//百位整除100

    cout << a << b << c << endl;


    int y = 1234;
    int a1 = y % 10;
    int b1 = (y / 10) % 10;
    int c1 = (y / 100) % 10;
    int d1 = (y / 1000) % 10;

    cout << a1 << b1 << c1 << d1 <<endl;

    double p = 0.125;
    double q = 0.7777777;

    printf("%10.5f,\n%-10.5f\n", p, q);

    system("pause");
    return 0;
}
