#include <iostream>

int main(){
    
    int arr[9] = {4,2,8,0,5,7,1,3,9};

    printf("Before sorted:\n");
    for(int i=0; i<9; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    //冒泡升序
    //（已）排序总轮数 = 元素个数 - 1
    //每轮对比次数 = 元素个数 - （已）排序轮数 - 1

    //总共排序轮数为0~7=8轮
    for(int i = 0; i < 9 - 1; i++) //已总轮数
    {
        for(int j = 0; j < 9 - i -1; j++) //每轮比对次数
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    printf("After sorted:\n");
    for(int i=0; i<9; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    system ("pause");
    return 0;
}