#include<stdio.h>
#include<stdlib.h>

#include<math.h>


int main(){
    
    double a,b,c;
    scanf("%lf %lf %lf", &a,&b,&c);
    double delta = b*b - 4*a*c;

    if(a==0 && b==0 && c==0)
    {
        printf("Zero Eq.");
    }
    else if(a==0 && b==0 && c!=0)
    {
        printf("NAE.");
    }
    else if(a==0)//之上if分支已限制b!=0
    {
        double x = - c/b;
        printf("%.2f\n",x);
    }
    else if(delta == 0)
    {
        double x = -b/(2*a);
        printf("%.2f\n",x);
    }
    else if(delta > 0)
    {
        double x1 = (-b + sqrt(delta)) / (2*a);
        double x2 = (-b - sqrt(delta)) / (2*a);
        printf("%.2f\n%.2f",x1, x2);
    }
    else //if(delta < 0)
    {
        double Re = (-b) / (2*a);
        double Im = fabs(sqrt(-delta) / (2*a));//fabs: abs of double

        Re = Re == 0 ? 0 : Re;

        printf("%.2f+%.2fi\n%.2f-%.2fi", Re, Im, Re, Im);
       // printf("%.2f-%.2fi", Re, Im);
    }

    system("pause");
    return 0;
}
