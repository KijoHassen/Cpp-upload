#include<stdio.h>
#include<stdlib.h>

int main(){
    
    int n, k;
    scanf("%d %d", &n, &k);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<n; i++){
        if(i!=0){
            printf(" ");
        }
        printf("%d", arr[i]);
    }

    system("pause");
    return 0;
}