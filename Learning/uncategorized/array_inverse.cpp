#include <iostream>

int main(){
    
    int arr[5] = {1, 3, 2, 5, 4};
    for(int i = 0; i<5; i++)
    {
        printf("%d\n", arr[i]);
    }

    int start = 0;
    int end = sizeof(arr)/sizeof(arr[0]) - 1; // 总长度除以一个元素长度等于元素数，再-1等于末位元素的下标

    while(start < end)
    {
        int temp = arr[start]; //创建临时内存
        arr[start] = arr[end]; //交换
        arr[end] = temp;

        start++; //向内步进
        end--;
    }

    std::cout << "\n"; //输出换行
    // std::cout << std::endl;
    // printf("\n");
    for(int i = 0; i<5; i++)
    {
        printf("%d\n", arr[i]);
    }

    system ("pause");
    return 0;
}