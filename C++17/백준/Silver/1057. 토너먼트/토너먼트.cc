#include <stdio.h>

int main(){
    int n,a,b,round=0;
    scanf("%d %d %d",&n,&a,&b);

    while(a!= b) {
        a=(a+1)/2;
        b=(b+1)/2;
        round++;
    }

    printf("%d\n",round);
    return 0;
}
