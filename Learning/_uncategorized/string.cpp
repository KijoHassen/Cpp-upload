#include <iostream>

int main(){
    
    char names[5] = {'m','a','y','e'}; //是字符串
    char names1[5] = {'m','a','y','e','w'}; //不是字符串，没有储存\0
    printf("%s|%s\n", names, names1);

    char str[] = "My name is AAA";//是字符串
    printf("%s\n", str);

    const char *pstr = "My name is AAA"; //不能修改

    puts(str);
    puts(pstr); 

    system ("pause");
    return 0;
}