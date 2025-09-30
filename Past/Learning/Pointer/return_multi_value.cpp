#include <iostream>
using namespace std;

void getMaxAndMin(int arr[], int len, int* max, int*min);

int main(){
    //定义数组
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int len = sizeof(arr) / sizeof(int);

    //调用getMaxAndMin
    int max = 0;
    int min = 0;

    getMaxAndMin(arr,len,&max,&min);

    printf("Max is %d\n", max);
    printf("Min is %d\n", min);

    system ("pause");
    return 0;
}

void getMaxAndMin(int arr[], int len, int* max_fp, int*min_fp)
{
    *max_fp = arr[0];

    for(int i=1; i<len; i++)
    {
        if (arr[i]>*max_fp)
        {
            *max_fp = arr[i];
        }
    }

    *min_fp = arr[0];

    for(int i=1; i<len; i++)
    {
        if (arr[i]<*min_fp)
        {
            *min_fp = arr[i];
        }
    }
}