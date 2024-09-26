#include <stdio.h>
 
int sum_of_digits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
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
 
    return 0;
}