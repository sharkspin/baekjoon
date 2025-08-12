#include <stdio.h>
int main(){
  int n;scanf("%d",&n);
  if(n==0){printf("0");return 0;}
  int k=(int)(n*0.15+0.5);
  int cnt[31]={0};
  for(int i=0;i<n;i++){
    int x;scanf("%d",&x);
    cnt[x]++;
  }
  int skip=k;
  for(int i=0;i<=30&&skip>0;i++){
    int use=cnt[i]<skip?cnt[i]:skip;
    cnt[i]-=use;
    skip-=use;
  }
  skip=k;
  for(int i=30;i>=0&&skip>0;i--){
    int use=cnt[i]<skip?cnt[i]:skip;
    cnt[i]-=use;
    skip-=use;
  }
  long long sum=0;
  int m=n-2*k;
  for(int i=0;i<=30;i++){
    sum+=(long long)i*cnt[i];
  }
  printf("%d",(int)((sum/(double)m)+0.5));
  return 0;
}