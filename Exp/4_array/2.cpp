#include<stdio.h>
#include<stdlib.h>
 
void reverse(int arr[], int n){//int arr[]一个整数数组可以传入数组名，实际上是指向数组首元素的指针
    for(int i=0, j=n-1; i<j; i++, j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n];
    m = m % n; // Handle cases where m >= n
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    reverse(arr, m);
    reverse(arr+m, n-m); //arr是指向数组第一个元素的指针。arr+m通过指针算术，向后移动m个元素的位置，指向第m个元素
    reverse(arr, n);

    for(int i=0; i<n; i++){
        if(i!=0){
            printf(" ");
        }
        printf("%d", arr[i]);
    }
    
    system("pause");
    return 0;
}
//arr[n]是角标n对应的元素的值
//arr是指向数组第一个元素的指针
//arr==&arr[0]
//*arr==arr[0]
//arr+m==&arr[m]
//*(arr+m)==arr[m]