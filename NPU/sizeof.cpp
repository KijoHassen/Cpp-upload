#include <iostream>
#include <limits>  // 用于获取数据类型的数值范围
using namespace std;

int main() {
    int d;
    cout << "Enter a number (1: char, 2: unsigned char, 3: short, 4：unsigned short 5: int, 6: unsigned int 7: long, 8: unsigned long, 9: long long, 10: unsigned long long): ";
    cin >> d;
    
    switch(d) {
        case 1: {
            cout << sizeof(char)<< ","
                 << int(numeric_limits<char>::min()) << ","
                 << int(numeric_limits<char>::max()) << endl;
            break;
        }
        case 2: {
            cout << sizeof(unsigned char)<< ","
                 << int(numeric_limits<char>::min()) << ","
                 << int(numeric_limits<char>::max()) << endl;
            break;
        }
        case 3: {
            cout << sizeof(short)<< ","
                 << numeric_limits<short>::min() << ","
                 << numeric_limits<short>::max() << endl;
            break;
        }
        case 4: {
            cout << sizeof(unsigned short)<< ","
                 << int(numeric_limits<char>::min()) << ","
                 << int(numeric_limits<char>::max()) << endl;
            break;
        }
        case 5: {
            cout << sizeof(int)<< ","
                 << numeric_limits<int>::min() << ","
                 << numeric_limits<int>::max() << endl;
            break;
        }
        case 6: {
            cout << sizeof(unsigned int)<< ","
                 << int(numeric_limits<char>::min()) << ","
                 << int(numeric_limits<char>::max()) << endl;
            break;
        }
        case 7: {
            cout << sizeof(long)<< ","
                 << numeric_limits<long>::min() << ","
                 << numeric_limits<long>::max() << endl;
            break;
        }
        case 8: {
            cout << sizeof(unsigned long)<< ","
                 << int(numeric_limits<char>::min()) << ","
                 << int(numeric_limits<char>::max()) << endl;
            break;
        }
        case 9: {
            cout << sizeof(long long) << ","
                 << numeric_limits<long long>::min() << ","
                 << numeric_limits<long long>::max() << endl;
            break;
        }
        case 10: {
            cout << sizeof(unsigned long long)<< ","
                 << int(numeric_limits<char>::min()) << ","
                 << int(numeric_limits<char>::max()) << endl;
            break;
        }
    }
    

    system ("pause");

    return 0;
}
