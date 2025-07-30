#include<stdio.h>

int main(void){
    int n;
    scanf("%d",&n);
    int w[n],h[n],rank[n];

    for(int i=0;i<n;i++){
        scanf("%d %d",&w[i],&h[i]);
        rank[i]=1;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j) continue;
            if(w[j]>w[i]&&h[j]>h[i]){
                rank[i]++;
            }
        }
    }

    for(int i=0;i<n;i++){
        printf("%d ",rank[i]);
    }

    return 0;
}
