#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size)
{
    for (int i=0; i<size-1; i++)
    {
        for (int j =0; j<size-1-i; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
}

int main(){

    int size = 0;

    printf("Enter size: \n");
    scanf("%d", &size);

    int arr[size];

    printf("Enter array: \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    bubbleSort(arr, size);

    for (int i = 0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }

    system ("pause");
    return 0;
}