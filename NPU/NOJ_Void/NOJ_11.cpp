#include <iostream>
 
int sum_of_digits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10; //取个位给sum
        n /= 10; //取十位，更新n变成个位数再加入sum中
        
    }
    return sum;
}
 
int main() {
    int n, count = 0;
    scanf("%d", &n);
 
    while (n > 0) {
        n -= sum_of_digits(n);
        count++;
    }
 
    printf("%d\n", count);

    system ("pause");
    return 0;
}