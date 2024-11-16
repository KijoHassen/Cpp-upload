#include<iostream>
int main()
{
    short num_1 = 10; //2 Bytes, -2^15 - 2^15-1
    int num_2 = 10; //4 Bytes, -2^31 - 2^31-1
    long num_3 = 10; //4 Bytes, -2^31 - 2^31-1 
    long long num_4 = 10; //8 Bytes, -2^63 - 2^63-1

    printf("%d\n",num_1);

    system ("pause");
    return 0;
}