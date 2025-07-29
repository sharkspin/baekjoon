#include <stdio.h>

int main() {
    int t,a,b;
    int res[1000],idx=0;
    scanf("%d",&t);
    while(t--) {
        scanf("%d%d",&a,&b);
        a=a%10;
        if(a==0) res[idx++]=10;
        else {
            int r=1;
            for(int i=0;i<b%4+4;i++) r=(r*a)%10;
            res[idx++]=r;
        }
    }
    for(int i=0;i<idx;i++) printf("%d\n",res[i]);
    return 0;
}
