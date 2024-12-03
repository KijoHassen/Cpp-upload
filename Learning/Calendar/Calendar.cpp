#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <vector>
#include <ctime>
#include <limits>

using namespace std;

// 全局变量与常量
const int MIN_YEAR = 1940;
const int MAX_YEAR = 2040;

// 函数声明
bool isLeapYear(int year);
int daysInMonth(int year, int month);
void showYearCalendar(int year);
void showMonthCalendar(int year, int month);
void calculateDateDifference(int year, int month, int day);
void manageToDoList(const string &date);

// 主界面函数
void mainMenu() {
    while (true) {
        cout << "\n=== 图形化年历与时钟系统 ===\n";
        cout << "1. 显示全年日历\n";
        cout << "2. 显示指定月份日历\n";
        cout << "3. 计算日期差\n";
        cout << "4. 待办事项管理\n";
        cout << "5. 退出系统\n";
        cout << "请选择功能 (1-5): ";
        int choice;

        cin >> choice;

        // 检查输入是否合法
        if (cin.fail()) {
            cin.clear(); // 清除错误状态
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // 清空缓冲区
            cout << "无效选项，请重新输入。\n";
            continue; // 重新进入循环
        }

        if (choice == 1) {
            int year;
            cout << "请输入年份 (" << MIN_YEAR << "-" << MAX_YEAR << "): ";
            cin >> year;
            if (cin.fail() || year < MIN_YEAR || year > MAX_YEAR) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "年份无效，请重新输入。\n";
                continue;
            }
            showYearCalendar(year);
        } else if (choice == 2) {
            int year, month;
            cout << "请输入年份 (" << MIN_YEAR << "-" << MAX_YEAR << "): ";
            cin >> year;
            cout << "请输入月份 (1-12): ";
            cin >> month;
            if (cin.fail() || year < MIN_YEAR || year > MAX_YEAR || month < 1 || month > 12) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "输入的年份或月份无效！\n";
                continue;
            }
            showMonthCalendar(year, month);
        } else if (choice == 3) {
            int year, month, day;
            cout << "请输入日期 (年 月 日): ";
            cin >> year >> month >> day;
            if (cin.fail() || year < MIN_YEAR || year > MAX_YEAR || month < 1 || month > 12 || day < 1 || day > daysInMonth(year, month)) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "输入的日期无效！\n";
                continue;
            }
            calculateDateDifference(year, month, day);
        } else if (choice == 4) {
            string date;
            cout << "请输入日期 (YYYY-MM-DD): ";
            cin >> date;
            manageToDoList(date);
        } else if (choice == 5) {
            cout << "退出系统，再见！\n";
            break;
        } else {
            cout << "无效选项，请重新选择。\n";
        }
    }
}

// 判断是否为闰年
bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// 计算某个月的天数
int daysInMonth(int year, int month) {
    if (month == 2) {
        return isLeapYear(year) ? 29 : 28;
    }
    if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    }
    return 31;
}

// 显示全年日历
void showYearCalendar(int year) {
    cout << "\n=== " << year << " 年全年日历 ===\n";
    for (int month = 1; month <= 12; ++month) {
        showMonthCalendar(year, month);
        cout << endl;
    }
}

// 显示某月日历
void showMonthCalendar(int year, int month) {
    static const string weekDays = "日 一 二 三 四 五 六";
    int startDay = 0;
    int totalDays = daysInMonth(year, month);

    // 计算当月的第一天是星期几
    for (int y = MIN_YEAR; y < year; ++y) {
        startDay += isLeapYear(y) ? 366 : 365;
    }
    for (int m = 1; m < month; ++m) {
        startDay += daysInMonth(year, m);
    }
    startDay %= 7;

    cout << "\n" << year << " 年 " << month << " 月\n";
    cout << weekDays << "\n";

    // 输出空格填充
    for (int i = 0; i < startDay; ++i) {
        cout << setw(4) << " ";
    }

    // 输出每一天
    for (int day = 1; day <= totalDays; ++day) {
        cout << setw(4) << day;
        if ((startDay + day) % 7 == 0) {
            cout << "\n";
        }
    }
    cout << "\n";
}

// 计算日期差
void calculateDateDifference(int year, int month, int day) {
    time_t now = time(nullptr);
    tm *current = localtime(&now);

    tm inputDate = {};
    inputDate.tm_year = year - 1900;
    inputDate.tm_mon = month - 1;
    inputDate.tm_mday = day;

    time_t inputTime = mktime(&inputDate);
    double diff = difftime(inputTime, now) / (60 * 60 * 24);

    cout << "\n距今天还有 " << diff << " 天\n";

    int weekDay = (inputTime / (60 * 60 * 24) + 4) % 7;
    static const string weekNames[] = {"日", "一", "二", "三", "四", "五", "六"};
    cout << "星期: " << weekNames[weekDay] << "\n";
}

// 管理待办事项
void manageToDoList(const string &date) {
    string filename = date + ".txt";
    cout << "\n=== 待办事项管理 (" << date << ") ===\n";
    cout << "1. 添加事项\n";
    cout << "2. 查看事项\n";
    cout << "3. 修改事项\n";
    cout << "4. 删除事项\n";
    cout << "请选择功能 (1-4): ";
    int choice;
    cin >> choice;

    if (choice == 1) {
        ofstream outFile(filename, ios::app);
        if (!outFile) {
            cout << "无法打开文件！\n";
            return;
        }
        cout << "请输入待办事项 (输入完成后输入END结束):\n";
        string task;
        cin.ignore();
        while (getline(cin, task) && task != "END") {
            outFile << task << endl;
        }
        outFile.close();
    } else if (choice == 2) {
        ifstream inFile(filename);
        if (!inFile) {
            cout << "当天没有待办事项。\n";
            return;
        }
        cout << "待办事项列表:\n";
        string task;
        while (getline(inFile, task)) {
            cout << "- " << task << "\n";
        }
        inFile.close();
    } else if (choice == 3) {
        vector<string> tasks;
        ifstream inFile(filename);
        if (!inFile) {
            cout << "当天没有待办事项。\n";
            return;
        }
        string task;
        while (getline(inFile, task)) {
            tasks.push_back(task);
        }
        inFile.close();

        cout << "待办事项列表:\n";
        for (size_t i = 0; i < tasks.size(); ++i) {
            cout << i + 1 << ". " << tasks[i] << "\n";
        }
        cout << "请输入要修改的任务编号: ";
        int index;
        cin >> index;
        if (index >= 1 && index <= tasks.size()) {
            cout << "请输入新的任务内容: ";
            cin.ignore();
            getline(cin, tasks[index - 1]);
        }

        ofstream outFile(filename);
        for (const string &t : tasks) {
            outFile << t << endl;
        }
        outFile.close();
    } else if (choice == 4) {
        remove(filename.c_str());
        cout << "待办事项已删除。\n";
    } else {
        cout << "无效选项。\n";
    }
}

// 主函数
int main() {
    mainMenu();

    system("pause");
    return 0;
}
