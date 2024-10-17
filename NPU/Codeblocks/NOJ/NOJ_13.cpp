#include<stdio.h>
 
typedef unsigned long long uint64;
 
int fastPowerMod (uint64 t, uint64 e, uint64 m){
    uint64 r = 1;
    while (e){
        if (e&1){
            r = (1LL*r*t)%m;
        }
        t = (1LL*t*t)%m;
        e >>= 1;
    }
    return r;
}
 
int main(){
    uint64 a,b,m,r;
    scanf("%llu %llu %llu",&a,&b,&m);
    r = fastPowerMod(a,b,m);
    printf("%llu",r);
    return 0;
}