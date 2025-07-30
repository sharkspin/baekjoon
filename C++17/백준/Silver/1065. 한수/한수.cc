#include<stdio.h>

int main(void){
    int n,count=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i<100){
            count++;
        }else{
            int h=i/100;
            int t=(i/10)%10;
            int o=i%10;
            if(h-t==t-o){
                count++;
            }
        }
    }
    printf("%d\n",count);
    return 0;
}
