#include <stdio.h>
#include <math.h>
#define R 6371.000000
#define PI 3.1415926
int main()
{
    double phi1,phi2,lambda1,lambda2,d;
    scanf("%lf%lf",&phi1,&lambda1);
    scanf("%lf%lf",&phi2,&lambda2);

    phi1=phi1*PI/180;
    phi2=phi2*PI/180;
    lambda1=lambda1*PI/180;
    lambda1=lambda1*PI/180;

    double havRatio = (1-cos(phi2-phi1))/2+cos(phi1)*cos(phi2)*(1-cos(lambda2-lambda1))/2;
    d = asin(sqrt(havRatio))*2*R;

    printf("%.4lfkm",d);

    return 0;
}