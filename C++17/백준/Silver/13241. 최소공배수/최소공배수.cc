#include <stdio.h>
int main(){
    long long a,b;
    scanf("%lld %lld",&a,&b);
    if(a==0||b==0){
        printf("0");
        return 0;
    }
    long long x=a,y=b;
    while(y){
        long long t=x%y;
        x=y;
        y=t;
    }
    long long g=x;
    printf("%lld",(a/g)*b);
    return 0;
}