#include <iostream>
using namespace std;

int main(){
    
    int x;
    float y;
    scanf("%3d%f",&x,&y);//scanf 遇到非数字字符会停止当前变量的解析。剩余未解析的字符会留在输入缓冲区中，未被处理。
    cout << x << endl;
    cout << y << endl;

    system ("pause");
    return 0;
}