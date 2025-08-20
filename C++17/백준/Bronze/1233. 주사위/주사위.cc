#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int cnt[81]={0}; // 최대 합 20+20+40=80
    for(int i=1;i<=a;i++){
        for(int j=1;j<=b;j++){
            for(int k=1;k<=c;k++){
                cnt[i+j+k]++;
            }
        }
    }
    int max=0,ans=0;
    for(int s=3;s<=a+b+c;s++){
        if(cnt[s]>max){
            max=cnt[s];
            ans=s;
        }
    }
    printf("%d",ans);
    return 0;
}