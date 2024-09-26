#include <iostream>
#include <stdio.h>

int main()
{
    int score;
    printf("Enter your score:");
    scanf("%d", score);
    printf("Your score is %d",score);

    if(score>600)
    {
        printf("Congratulations!");
    }
    else
    {
    printf("Sorry...");
    }
    system ("pause");
    return 0;
}
