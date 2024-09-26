#include <iostream>

int main()
{
    int score;
    printf("Enter your score:");
    scanf("%d",&score);
    printf("Your score is: %d\n",score);

    if(score>600)
    {
        if(score>750)
        {
            printf("Error!");
        }
        else if(score>700)
        {
            printf("THU!");
        }
        else if(score>650)
        {
            printf("NPU!");
        }
        else printf("XJTU!");
        
        printf("Congratulations!\n");
    }
    else printf("Sorry...");
    
    system ("pause");
    return 0;
}