#include <stdio.h>
int main(){
  char s[1000005];int len=0;int i=0,idx,started=0;scanf("%s",s);
  while(s[len])len++;
  if(len==1&&s[0]=='0'){printf("0");return 0;}
  idx=len%3;
  if(idx){
    int v=0;
    for(i=0;i<idx;i++)v=v*2+(s[i]-'0');
    if(v){printf("%d",v);started=1;}
  }
  for(i=idx;i<len;i+=3){
    int v=(s[i]-'0')*4+(s[i+1]-'0')*2+(s[i+2]-'0');
    if(!started&&v==0)continue;
    printf("%d",v);started=1;
  }
  if(!started)printf("0");
  return 0;
}