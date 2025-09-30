#include <iostream>
using namespace std;
struct Person
{
    char name[10];
    int age;
    float height;
};

int main(){
    
    struct Person person1 = {"Zhangsan", 20, 1.80f};

    printf("%s\n", person1.name);
    printf("%d\n", person1.age);
    printf("%.2f\n", person1.height); //结构体变量.成员名

    struct Person * ptr = &person1; //person1取地址给ptr指针

    printf("%s\n", ptr->name);
    printf("%d\n", ptr->age);
    printf("%.2f\n", ptr->height); //结构体指针->成员名

    system ("pause");
    return 0;
}