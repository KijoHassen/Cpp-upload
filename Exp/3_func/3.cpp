#include<stdio.h>
#include<stdlib.h>

#include<math.h>

double funcos(double e, double x);

int main(){
    
    double e, x;
    scanf("%lf %lf", &e, &x);
    printf("cos(%.2lf) = %.6lf\n", x, funcos(e,x));

    system("pause");
    return 0;
}

double funcos(double e, double x){

    double sum = 1, seq = 1;//泰勒级数和初始1，泰勒级数第一项1
    for(int i=1; fabs(seq)>e ;i++){//seq为第i项，>e时继续求后项
        seq *= - (x * x) / ((2 * i) * (2 * i - 1));
        sum += seq;
    }
    return sum;
}

