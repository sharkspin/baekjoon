#include<stdio.h>

int main()
{
    int N,m,M,T,R;
    int re=0;
    scanf("%d %d %d %d %d",&N,&m,&M,&T,&R);
    int o=m;
    if(m+T>M){ 
        printf("-1");
        return 0;
    }
    while(1){
        while(m+T<=M){
            m+=T;
            re++;
            N-=1;
            if(N==0){
                printf("%d",re);
                return 0;
            }
        }
        if(m-R<o){
            m=o;
            re++;
        }else{
            m-=R;
            re++;
        }
    }
    return 0;
}
