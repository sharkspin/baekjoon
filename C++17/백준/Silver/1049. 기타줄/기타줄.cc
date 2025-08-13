#include <stdio.h>
int main(){
  int n,m;scanf("%d %d",&n,&m);
  int pack=1000000000,sing=1000000000;
  for(int i=0;i<m;i++){
    int p,s;scanf("%d %d",&p,&s);
    if(p<pack)pack=p;
    if(s<sing)sing=s;
  }
  int cost1=(n/6)*pack+(n%6)*sing;
  int cost2=((n/6)+1)*pack;
  int cost3=n*sing;
  int ans=cost1;
  if(cost2<ans)ans=cost2;
  if(cost3<ans)ans=cost3;
  printf("%d",ans);
  return 0;
}