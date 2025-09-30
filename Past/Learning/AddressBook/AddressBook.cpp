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
                //1或2可以退出循环
                abs->personArray[abs->m_Size].m_Sex = sex;
                break;
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
                abs->personArray[abs->m_Size].m_Age = age;
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
            cout << "姓名：" << abs->personArray[i].m_Name << "    ";
            cout << "性别：" << (abs->personArray[i].m_Sex == 1 ? "男" : "女") << "    ";
            cout << "年龄：" << abs->personArray[i].m_Age << "    ";
            cout << "电话：" << abs->personArray[i].m_Tel << "    ";
            cout << "住址：" << abs->personArray[i].m_Addr << endl;
        }
    }

    system("pause");
    system("cls");
}

//*查询联系人是否存在，存在返回数组中具体位置，不存在返回-1
int isExist(Addressbook * abs, string name)
{
    for(int i=0; i<abs->m_Size; i++)
    {
        if(abs->personArray[i].m_Name == name)
        {
            return i;
        }
    }
    return -1;
}

//3、删除联系人
void deletePerson(Addressbook * abs)
{
    //检测联系人是否存在
    cout << "请输入您要删除的联系人姓名：" << endl;

    string name;
    cin >> name;
    //ret == -1 查无此人
    //ret != -1 存在此人
    int ret = isExist(abs, name);

    if(ret != -1)
    {
        for(int i=ret; i<abs->m_Size; i++)
        {
            //数据前移
            abs->personArray[i] = abs->personArray[i+1];
        }
            
        //更新通讯录人员数
        abs->m_Size--;
        cout << "删除成功！" << endl;
    }
    else
    {
        cout << "查无此人！" << endl;
    }

    system("pause");
    system("cls");
}

//4、查找联系人
void findPerson(Addressbook * abs)
{
    cout << "请输入您要查找的联系人姓名" << endl;
    string name;
    cin >> name;
    
    //判断联系人是否存在
    int ret = isExist(abs, name);

    if(ret != -1)
    {
        cout << "姓名；" << abs->personArray[ret].m_Name << "    ";
        cout << "性别；" << abs->personArray[ret].m_Sex << "    ";
        cout << "年龄；" << abs->personArray[ret].m_Age << "    ";
        cout << "电话；" << abs->personArray[ret].m_Tel << "    ";
        cout << "住址；" << abs->personArray[ret].m_Addr << "    " << endl;
    }
    else
    {
        cout << "查无此人！" << endl;
    }

    system("pause");
    system("cls");
}

//5、修改联系人
void modifyPerson(Addressbook * abs)
{
    cout << "请输入您要修改的联系人姓名：" << endl;
    string name;
    cin >> name;

    int ret = isExist(abs, name);

    if(ret != -1)
    {
        //姓名
        string name;
        cout << "请修改姓名：" << endl;
        cin >> name;
        abs->personArray[ret].m_Name = name;

        //性别
        cout << "请修改性别：" << endl;
        cout << "1 - 男" << endl;
        cout << "2 - 女" << endl;
        int sex = 0;

        while(1)
        {
            cin >> sex;
            if(sex == 1 || sex == 2)
            {
                //1或2可以退出循环
                abs->personArray[ret].m_Sex = sex;
                break;
            }
            else
            {
                cout << "输入有误，请重新输入！" << endl;
            }
        }
        
        //年龄
        cout << "请修改年龄(0 ~ 150)：" << endl;
        int age = 0;

        while(1)
        {
            cin >> age;
            if(age >= 0 && age <= 150)
            {
                abs->personArray[ret].m_Age = age;
                break;
            }
            else
            {
                cout << "输入有误，请重新输入！" << endl;
            }
        }

        //电话
        cout << "请修改联系电话：" << endl;
        string tel;
        cin >> tel;
        abs->personArray[ret].m_Tel = tel;

        //家庭住址
        cout << "请修改家庭住址：" << endl;
        string addr;
        cin >> addr;
        abs->personArray[ret].m_Addr = addr;

        cout << "修改成功！" << endl;

    }
    else
    {
        cout << "查无此人！" << endl;
    }

    system("pause");
    system("cls");
}

//6、清空联系人
void cleanPerson(Addressbook * abs)
{
    abs->m_Size = 0;
    cout << "通讯录已清空！" << endl;

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
    //创建 选择输入 的变量
    int select = 0;
   
    while(1)
    {
        //调用菜单界面
        showMenu(); 
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
                {
                    // 测试段
                    // cout << "请输入删除联系人姓名：" << endl;
                    // string name;
                    // cin >> name;

                    // if(isExist(&abs, name) == -1)
                    // {
                    //    cout << "查无此人！" << endl; 
                    // }
                    // else
                    // {
                    //     cout << "存在" << endl;
                    // }
                    deletePerson(&abs);
                }
                    break;
                case 4://查询联系人
                    findPerson(&abs);
                    break;
                case 5://修改联系人
                    modifyPerson(&abs);
                    break;
                case 6://清空联系人
                    cleanPerson(&abs);
                    break;
                case 0://退出通讯录
                    cout << "欢迎下次使用！" << endl;
                    system("pause");
                    return 0;
                    break;
                default:
                    cout << "输入有误，请输入有效数字！" <<endl;
                    system("pause");
                    system("cls");
                    break;
            }
        }
        else
        {
            //清除错误状态
            cin.clear();
            //丢弃缓冲区中当前行的所有内容
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "输入有误，请输入数字！" << endl;
            system("pause");
            system("cls");
        }
    }

    system ("pause");
    return 0;
}