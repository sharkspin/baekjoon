#include <stdio.h>
int main(){
    int n;
    long long cluster;
    scanf("%d",&n);
    long long ans=0;
    long long f[n];
    for(int i=0;i<n;i++) scanf("%lld",&f[i]);
    scanf("%lld",&cluster);
    for(int i=0;i<n;i++){
        if(f[i]==0) continue;
        ans+=((f[i]-1)/cluster+1)*cluster;
    }
    printf("%lld",ans);
    return 0;
}