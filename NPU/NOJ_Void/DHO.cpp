#include <iostream>
 
int main() {
    unsigned int num; // 使用 unsigned int 来确保接受非负整数
    scanf("%u", &num);
    printf("%X,", num); // %x 用于输出十六进制
    printf("%o", num); // %o 用于输出八进制
 
    system ("pause");
    return 0;
}