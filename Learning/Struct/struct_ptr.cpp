#include <iostream>
#include <string>
using namespace std;

struct Student
{
    string name;
    int age;
    float score;
};

int main(){
    //创建结构体变量
    struct Student s = {"Zhangsan", 18, 100};
    //指针指向结构体变量
    struct Student *p = &s; 
    //用指针访问结构体变量
    cout << "姓名：" << p->name
         << " 年龄：" << p->age
         << " 分数：" << p->score
         << endl; 
         
    system ("pause");
    return 0;
}