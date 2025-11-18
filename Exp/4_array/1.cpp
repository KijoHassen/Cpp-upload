#include<stdio.h>
#include<stdlib.h>

int main(){

    int n;
    scanf("%d", &n); //两个scanf代表换行输入，不用加\n
    int arr[n]; //n个元素
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    int index_max = 0;
    for(int i=1; i<n; i++){
        if(arr[index_max] < arr[i]){ /*假设下标0的元素最大，
            遇到更大的就更新下标，相等不更新*/
            index_max = i;
        }  
    }

    printf("%d %d", arr[index_max], index_max);
    
    system("pause");
    return 0;
}