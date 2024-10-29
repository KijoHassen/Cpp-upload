#include <iostream>

int main(){
    
    int arr[2][3];
    arr[0][0] = 1;
    arr[0][1] = 2;
    arr[0][2] = 3;
    arr[1][0] = 4;
    arr[1][1] = 5;
    arr[1][2] = 6;

    //外层循环行数，内层循环列数
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
    }

    printf("\n");

    int arr2[2][3] = {{7,8,9},{10,11,12}};

       for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }

    system ("pause");
    return 0;
}