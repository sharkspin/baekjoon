#include <stdio.h>
int main(){
  int n;scanf("%d",&n);
  unsigned long long a=0,b=1;
  for(int i=0;i<n;i++){unsigned long long t=a+b;a=b;b=t;}
  printf("%llu",a);
  return 0;
}