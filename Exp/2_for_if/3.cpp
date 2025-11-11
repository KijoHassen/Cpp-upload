#include<stdio.h>
#include<stdlib.h>

#include<math.h>


int main(){
    
    int N;
    int c;
    scanf("%d %c", &N, &c);
    int n = (int)sqrt((N+1)/2);
    int left = N - (2*n*n - 1);

    for(int i = 1; i<=n; i++){//上三角共n行，i为行数
        for(int j = 1; j<=i-1; j++){
            putchar(' ');//输出一个字符：空格输出
        }
        for(int k = 1; k<=2*n-2*i+1; k++){
            putchar(c);
        }
        printf("\n");
    }

    for(int i = 1; i<=n-1; i++){
        for(int j = 1; j<=n-i-1; j++){
            putchar(' ');//输出一个字符：空格输出
        }
        for(int k = 1; k<=2*i+1; k++){
            putchar(c);
        }
        printf("\n");
    }

    printf("%d", left);
    
    system("pause");
    return 0;
}
