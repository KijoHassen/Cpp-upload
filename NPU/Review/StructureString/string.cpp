#include <iostream>
using namespace std;

int main(){
    
    char str1[6] = "hello";
    char str2[] = "hello";
    char str3[6] = {'h','e','l','l','o','\0'};
    char * str_ptr = "hello"; //创建str_ptr指针指向字符串首字符的地址

    system ("pause");
    return 0;
}