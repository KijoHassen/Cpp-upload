#include <iostream>
using namespace std;

//显示菜单界面
void showMenu()
{   printf("$$$$$$$$$$$$$$$$$$$$$$$$\n");
    printf("$$$$$ 1.添加联系人 $$$$$\n");
    printf("$$$$$ 2.显示联系人 $$$$$\n");
    printf("$$$$$ 3.删除联系人 $$$$$\n");
    printf("$$$$$ 4.查询联系人 $$$$$\n");
    printf("$$$$$ 5.修改联系人 $$$$$\n");
    printf("$$$$$ 6.清空联系人 $$$$$\n");
    printf("$$$$$ 0.退出通讯录 $$$$$\n");
    printf("$$$$$$$$$$$$$$$$$$$$$$$$\n");
}

int main(){
    //调用菜单界面
    showMenu();
    

    system ("pause");
    return 0;
}