#include <iostream>
#include <string>
#include <limits>
using namespace std;
#define MAX 1000//太大会爆内存

//设计联系人结构体
struct Person
{
    string m_Name;
    int m_Sex;
    int m_Age;
    string m_Tel;
    string m_Addr;
};

//设计通讯录结构体
struct Addressbook
{
    //通讯录中保存的联系人数组
    struct Person personArray[MAX]; 

    //通讯录中当前记录的联系人个数
    int m_Size ;
};

//1、添加联系人
void addPerson(Addressbook * abs)
{
    //判断通讯录是否已满
    if (abs->m_Size >= MAX)
    {
        cout << "通讯录已满，无法添加！" << endl;
        return;
    }
    else
    {
        //添加联系人信息
        //姓名
        string name;
        cout << "请输入姓名：" << endl;
        cin >> name;
        abs->personArray[abs->m_Size].m_Name = name;


        //性别
        cout << "请输入性别：" << endl;
        cout << "1-男" << endl;
        cout << "2-女" << endl;
        int sex = 0;
        
        while(1)
        {
            cin >> sex;
            if(sex == 1 || sex == 2)
            {
                abs->personArray[abs->m_Size].m_Sex = sex;
                break;//1或2可以退出循环
            }
            else
            {
                cout << "输入有误，请重新输入！" << endl;
            }
        }

        //年龄
        cout << "请输入年龄(0 ~ 150)：" << endl;
        int age = 0;

        while(1)
        {
            cin >> age;
            if(age >= 0 && age <= 150)
            {
                abs->personArray[abs->m_Size].m_Age = sex;
                break;
            }
            else
            {
                cout << "输入有误，请重新输入！" << endl;
            }
        }

        //电话
        cout << "请输入联系电话：" << endl;
        string tel;
        cin >> tel;
        abs->personArray[abs->m_Size].m_Tel = tel;

        //住址
        cout << "请输入家庭住址：" << endl;
        string address;
        cin >> address;
        abs->personArray[abs->m_Size].m_Addr = address;

        //更新通讯录人数
        abs->m_Size++;

        //提示成功
        cout << "新联系人信息添加成功！" << endl;

        //按任意键清屏并继续
        system("pause");
        system("cls");
    }

}

//2、显示联系人
void showPerson(Addressbook * abs)
{
    //判断通讯录是否为空
    if(abs->m_Size == 0)
    {
        cout << "当前通讯录为空" << endl;
    }
    else
    {
        for(int i = 0; i < abs->m_Size; i++)
        {
            cout << "姓名：" << abs->personArray[i].m_Name << "\t";
            cout << "性别：" << abs->personArray[i].m_Sex << "\t";
            cout << "年龄：" << abs->personArray[i].m_Age << "\t";
            cout << "电话：" << abs->personArray[i].m_Tel << "\t";
            cout << "住址：" << abs->personArray[i].m_Addr << endl;
        }
    }

    system("pause");
    system("cls");
}
//显示菜单界面
void showMenu()
{   cout << "$$$$$$$$$$$$$$$$$$$$$$$$" << endl;
    cout << "$$$$$ 1.添加联系人 $$$$$" << endl;
    cout << "$$$$$ 2.显示联系人 $$$$$" << endl;
    cout << "$$$$$ 3.删除联系人 $$$$$" << endl;
    cout << "$$$$$ 4.查询联系人 $$$$$" << endl;
    cout << "$$$$$ 5.修改联系人 $$$$$" << endl;
    cout << "$$$$$ 6.清空联系人 $$$$$" << endl;
    cout << "$$$$$ 0.退出通讯录 $$$$$" << endl;
    cout << "$$$$$$$$$$$$$$$$$$$$$$$$" << endl;
};

//主函数
int main(){
    
    //创建通讯录结构体变量
    Addressbook abs;
    //初始化通讯录中当前人员个数
    abs.m_Size = 0;

    int select = 0; //创建 选择输入 的变量
   
    while(1)
    {
        showMenu(); //调用菜单界面
        cout << "请选择功能：" << endl;

        // 验证用户输入是否为有效数字
        if ((cin >> select)) 
        {
            //输入了有效数字
            switch (select)
            {
            case 1://添加联系人 
                addPerson(&abs);//地址传递可以修改实参
                break;
            case 2://显示联系人
                showPerson(&abs);
                break;
            case 3://删除联系人
                break;
            case 4://查询联系人
                break;
            case 5://修改联系人
                break;
            case 6://清空联系人
                break;
            case 0://退出通讯录
                cout << "欢迎下次使用！" << endl;
                system("pause");
                return 0;
                break;
            default:
                cout << "输入有误，请输入有效数字！" <<endl;
                break;
            }
        }
        else
        {
            cin.clear(); // 清除错误状态
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // 丢弃缓冲区中当前行的所有内容
            cout << "输入有误，请输入数字！" << endl;
        }
    }

        

    system ("pause");
    return 0;
}