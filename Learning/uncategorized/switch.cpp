#include <iostream>

int main(){
    printf("type a number\n");
    int score = 0;
    scanf("%d", &score);
    switch (score)
    {
    case 10:
        printf("very good\n");
        break;
    case 9:
        printf("good\n");
        break;
    default:
    printf("what?\n");
        break;
    }
    system ("pause");
    return 0;
}