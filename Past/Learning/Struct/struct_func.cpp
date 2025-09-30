#include <iostream>
#include <string>
using namespace std;

struct Student
{
    string name;
    int age;
    float score;
};

//值传递
void printStudent1(struct Student a)
{
    a.age = 100;
    cout << "子函数1中 姓名：" << a.name << " 年龄：" << a.age << " 分数：" << a.score << endl;
}

//地址传递
void printStudent2(struct Student * p)
{
    //用p->访问指针所指结构体的内容
    p->age = 200;
    cout << "子函数2中 姓名：" << p->name << " 年龄：" << p->age << " 分数：" << p->score << endl;
}

int main(){
    
    struct Student s;//创建结构体中的一个变量
    s.name = "Zhangsan";//用.访问结构体中各个分变量
    s.age = 18;
    s.score = 99.5;

    printStudent1(s);
    cout << "值传递main函数中 姓名：" << s.name << " 年龄：" << s.age << " 分数：" << s.score << endl;
    printStudent2(&s);
    cout << "地址传递main函数中 姓名：" << s.name << " 年龄：" << s.age << " 分数：" << s.score << endl;

    system ("pause");
    return 0;
}