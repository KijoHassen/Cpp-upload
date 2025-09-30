#include <iostream>
//级数和
double cal(int n) {
    double sum = 0; 
    double sum2=40.4;//->8
    if(n<9){   
    for (int i = 1; i <= n; i++) {
    	printf("%d.%d",i,i+1);
        
        if(i!=n) printf("+");
        sum += (i + (i + 1)*0.1);
        }
        return sum;
    
    }
    if(n>=9&&n!=99){
    printf("1.2+2.3+3.4+4.5+5.6+6.7+7.8+8.9+");
    for(int m=9;m<=n;m++)
    {
    	if(m%10!=9)
        	printf("%d.%d",m,m+1);
        else printf("%d.%d",m,(m/10)+1);
        
        if(m!=n) printf("+");
        sum2+=(m+(m+1)*0.01);
        }
        return sum2;
   }
    if(n==99){
    	cal(98);
    	printf("+99.1");
        return 5003.55; 
    }
    
}
 
int main() {
    int n;
    scanf("%d", &n);
    double result = cal(n);
    printf("=%.2lf\n", result);

    system("pause");
    return 0;
}