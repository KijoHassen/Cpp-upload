#include <iostream>
using namespace std;

int main(){
    
    int num = 0;
    printf("Type a 4-digit number: "); //1234
    scanf("%d", &num);

    int mono = num % 10;
    int dec = (num / 10) % 10;
    int cent = (num / 100) % 10;
    int mili = (num /1000) % 10;

    printf("%d, %d, %d, %d\n", mono, dec, cent, mili);

    system ("pause");
    return 0;
}