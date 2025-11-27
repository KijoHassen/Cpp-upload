#include<stdio.h>
#include<stdlib.h>

int main(){
    //读取一个n*n的二维数组
    int n;
    scanf("%d", &n);
    int arr[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    int sum = 0;
      for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i+j==n-1 || i==n-1 || j==n-1){// 除了副对角线，最后一行，最后一列
                continue; //continue回到上一级for，开始下一次循环
            }else{
                sum += arr[i][j];
            }
        }
    }

    printf("%d\n", sum);

    system("pause");
    return 0;
}