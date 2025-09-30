#include <iostream>
#include <time.h>

int main(){
    srand((int)time(0));
    int num = rand()%100+1; //0-99 --> 1-100
    std::cout << "The answer is:\n" << num << std::endl;

    int val = 0;
    while(1)
    {   
        std::cout << "Type your number: " << std::endl;
        std::cin >> val;
        
        if(val > num)
        {
            std::cout << "too large" << std::endl;
        }
        else if (val < num)
        {
            std::cout << "too small" << std::endl;
        }
        else
        {
            std::cout << "right" << std::endl;
            break;
        }
    }



    system ("pause");
    return 0;
}