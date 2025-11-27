#include<stdio.h>
#include<stdlib.h>

int main(){
    //读取一个m*n的二维数组
    int m,n;
    scanf("%d %d", &m, &n);
    int arr[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &arr[i][j]);
        }
    }

    int sum = 0;
      for(int i=0; i<m; i++){
        int sum=0;
        for(int j=0; j<n; j++){
           sum += arr[i][j];
        }
        printf("%d\n", sum);//计算每一行的和之后，进入下一行，sum重新置0复用
    }

    system("pause");
    return 0;
}