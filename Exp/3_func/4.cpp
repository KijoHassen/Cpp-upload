//对输入的整数数组执行线性查找，找出所有等于给定值 x 的元素下标并输出；
//没有任何匹配，输出 "Not Found"
#include<stdio.h>
#include<stdlib.h>
#define MAX 100

int search(int arr[], int n, int x, int index);

// int main(){
//     int n, x;
//     int arr[MAX];
//     scanf("%d", &n);
//     for(int i=0; i<n; i++){
//         scanf("%d", &arr[i]);
//     }
//     scanf("%d", &x);

//     for(int index=0; index<n; index++){
//         if(search(arr, n, x, index) == 1){
//             printf("%d", index);
//         }
//         if(search(arr, n, x, index) == -1){
//             continue;
//         }
//     }
int main(){
    int n, x;
    int arr[MAX];
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", &x);

    int found = 0;
    for(int index=0; index<n; index++){
        if(search(arr, n, x, index) == 1){
            printf("%d", index);
            found = 1; //找到了一个就算找到
        }
    }

    if(found == 0){ //一个也没找到就是0
        printf("Not Found");
    }

    system("pause");
    return 0;

}

int search(int arr[], int n, int x, int index) {
    if (arr[index] == x){
         return 1;
    }
    return -1;
}
