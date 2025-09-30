#include <iostream>

void bubbleSort(int *arr, int len)//(指针指向数组即首地址， 数组的长度)
{
    for(int i=0; i<len-1; i++)
    {
        for(int j=0; j<len-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

                std::cout << "After swapping elements at index " << j << " and " << j + 1 << ": ";
                for(int k = 0; k < len; k++)
                {
                    std::cout << arr[k] << " ";
                }
                std::cout << std::endl;
            }
        }
    }
}

void printArray(int *arr, int len)
{
    for(int i=0; i<len; i++)
    {
        printf("%d\n", arr[i]);
    }
}

int main(){
    
    int arr[10] = {4,3,6,9,1,2,10,8,7,5};
    int len = sizeof(arr)/sizeof(arr[0]);

    bubbleSort(arr, len);

    printArray(arr, len);

    system ("pause");
    return 0;
}