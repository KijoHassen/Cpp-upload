#include <iostream>
using namespace std;

int main(){
    
    for(int i=0;i<10;i++)
    {
        if(i==3)
        {
            continue; // continue跳过本次循环继续下一次循环
        }
        printf("%d\n", i);
    }

    printf("\n");

    for(int i=0;i<10;i++)
    {
        if(i==3)
        {
            break; // break跳出所有循环
        }
        printf("%d\n", i);
    }

    system ("pause");
    return 0;
}