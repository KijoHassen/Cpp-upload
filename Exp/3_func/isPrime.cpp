#include<stdio.h>
#include<stdlib.h>
#include<math.h>

bool isPrime(int n){ //If int isPrime(int n), return 1 for true and 0 for false.
    if(n<=1){
        return false;
    }
    for(int i=2; i<=(int)sqrt(n); i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        int x;
        scanf("%d", &x);
        if(isPrime(x)){ //isPrime(x) || isPrime(x) == true || isPrime(x) == 1 are both correct.
            printf("%d is a prime number.\n", x);
        }else{
            printf("%d is not a prime number.\n", x);
        }
    }

    system("pause");
    return 0;
}