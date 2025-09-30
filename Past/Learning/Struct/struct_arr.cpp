#include <iostream>
#include <string>
using namespace std;

struct Student//定义结构体
{
    string name;
    int age;
    int score;
};

int main(){
    
    //创建结构体数组
    struct Student stuArray[3] = 
    {
        {"Zhangsan", 18, 100},
        {"Lisi", 19, 99},
        {"Wangwu", 20, 98},
    };
    
    //更改数组中变量的分变量
    stuArray[2].name = "Zhaoliu";
    stuArray[2].age = 69;
    stuArray[2].score = 60;

    for(int i=0; i<3; i++)
    {
        cout << "姓名：" << stuArray[i].name 
             << " 年龄：" << stuArray[i].age 
             << " 分数：" << stuArray[i].score 
             << endl;
    }

    system ("pause");
    return 0;
}