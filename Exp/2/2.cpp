#include<stdio.h>
#include<stdlib.h>

#include<math.h>


int main(){
    
    int n;
    scanf("%d", &n);

    int lower = pow(10, n-1);
    int upper = pow(10, n) - 1;

    for(int i = lower; i <= upper; i++){
        int temp = i;
        int sum = 0;
        while(temp > 0){
            int digit = temp % 10;//得到末位
            temp /= 10;//整除，去掉末尾
            //sum += pow(digit,n);太慢用累乘
            int product = 1;
            for(int j = 1; j<=n;j++){
                product *= digit;
            }
            sum += product;
        }
        if(sum == i){
            printf("%d\n", i);

        }
    }

    system("pause");
    return 0;
}
