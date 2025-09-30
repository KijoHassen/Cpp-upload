#include <iostream>

int main(){
    
    int *p = NULL;//空指针，NULL为编号为0的内存，0-255的内存空间是系统占用的，没有权限。
    *p = 100;//空指针的内存不可操作

    int *q = (int *)0x1100;//野指针，随便指定了一个内存地址，权限冲突

    system ("pause");
    return 0;
}