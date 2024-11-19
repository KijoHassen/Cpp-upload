#include <iostream>
#include <string>
using namespace std;
//先定义学生结构体
struct Student
{
    string name;
    int age;
    int score;
};

struct Teacher
{
    int ID;
    string name;
    int age;
    struct Student s;
};

int main(){
    
    struct Teacher t;
    t.ID = 9527;
    t.name = "老王";
    t.age = 66;
    t.s.name = "张三";
    t.s.age = 18;
    t.s.score = 100;
    
    system ("pause");
    return 0;
}