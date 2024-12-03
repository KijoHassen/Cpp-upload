#include <iostream>

int main(){
    
//冒泡排序
    int arr[5] = {300, 350, 200, 400, 250};
    int max = 0;
    for(int i = 0; i<5; i++) //<5为0,1,2,3,4
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
        // else //else分支没有必要
        // {
        //     max = max;
        // }
    }
    printf("The biggest is: %d\n", max);

    system ("pause");
    return 0;
}