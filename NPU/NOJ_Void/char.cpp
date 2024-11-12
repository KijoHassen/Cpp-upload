#include <iostream>
int main(){
    char c;
    int a=0,n=0,s=0;
    printf("input string:");

    while ((c=getchar())!='\n')
        if ((c>='A'&&c<='Z') || (c>='a'&&c<='z')) 
            a++;
        else if(c>='0'&&c<='9') 
            n++;
        else if (c==' ') 
            s++;
        
    printf("%d,%d,%d\n",a,n,s);
    system ("pause");
    return 0;
}