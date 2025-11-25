#include<stdio.h>
#include<stdlib.h>

int main(){

    for(double a=1.00; a<=5.00; a+=0.01){
        printf("%10.2lf\n", a);
    }
    
    system("pause");
    return 0;
}