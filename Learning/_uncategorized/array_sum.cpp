#include <iostream>

int main(){
    
    int arr[3][3] = 
    {
        {100,100,100},
        {90,50,100},
        {60,70,80}
    };

    char names[3][100] = {"A", "B", "C"};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }


    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
            sum +=arr[i][j];
        }
        printf ("The total score of %s is: %d\n", names[i], sum);
    }

    system ("pause");
    return 0;
}