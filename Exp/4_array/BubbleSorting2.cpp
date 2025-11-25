#include<stdio.h>
#include<stdlib.h>

int main(){

    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<=n-1; i++){ //数组有n个元素，下标从0到n-1。需要输入n次。
        scanf("%d", &arr[i]);
    }

    int temp = 0;
    for(int i=0; i<=n-1; i++){ //共n轮排序
        //输入n输出完整排序，替换k输出k次排序后的结果
        for(int j=0; j<=n-2-i; j++){ //i+j=n-2定值，故j<=n-2-i
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    for(int i=0; i<=n-1; i++){
        if(i!=0){
            printf(" ");
        }
        printf("%d", arr[i]);
    }

    system("pause");
    return 0;
}

// input: 2 3 5 1 6 4

// i=0; 2 3 1 5 4 6 k=1
// i=1; 2 1 3 4 5 6 k=2
// i=2; 1 2 3 4 5 6 k=3
// i=3; 1 2 3 4 5 6 k=4
// i=4; 1 2 3 4 5 6 k=5
// i=5; 1 2 3 4 5 6 k=6