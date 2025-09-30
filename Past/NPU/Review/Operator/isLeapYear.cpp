#include <iostream>
using namespace std;

int main(){
    
    while(1)
    {
        int year = 0;
        scanf("%d", &year);
        if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        {
            printf("isLeapYear\n");
        }
        else
        {
            printf("isNotLeapYear\n");
        }
    }
    
    system ("pause");
    return 0;
}