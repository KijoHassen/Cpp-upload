#include <iostream>
#include <string>
using namespace std;

struct Student
{
    string name;
    int age;
    float score;
}s3;//顺便创建，后面赋值

int main(){
    
    struct Student s1;//创建结构体中的一个变量
    s1.name = "Zhangsan";//用.访问结构体中各个分变量
    s1.age = 18;
    s1.score = 99.5;
    cout << "姓名：" << s1.name << " 年龄：" << s1.age << " 分数：" << s1.score << endl;

    struct Student s2 = {"Lisi", 19, 60.1};//一起赋值
    cout << "姓名：" << s2.name << " 年龄：" << s2.age << " 分数：" << s2.score << endl;

    s3.name = "Wangwu";
    s3.age = 99;
    s3.score = 0.1;
    cout << "姓名：" << s3.name << " 年龄：" << s3.age << " 分数：" << s3.score << endl;

    system ("pause");
    return 0;
}