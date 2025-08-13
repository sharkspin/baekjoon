#include <stdio.h>
int rev(int x){
  int r=0;
  while(x){
    r=r*10+x%10;
    x/=10;
  }
  return r;
}
int main(){
  int x,y;
  scanf("%d %d",&x,&y);
  printf("%d",rev(rev(x)+rev(y)));
  return 0;
}