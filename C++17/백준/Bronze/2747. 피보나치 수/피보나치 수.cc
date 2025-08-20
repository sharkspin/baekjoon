#include <stdio.h>
int main(){
  int n;scanf("%d",&n);
  int a=0,b=1;
  for(int i=0;i<n;i++){
    int t=a+b;a=b;b=t;
  }
  printf("%d",a);
  return 0;
}