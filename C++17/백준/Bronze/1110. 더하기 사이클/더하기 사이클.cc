#include <stdio.h>
int main(){
  int n,o,c=0;
  scanf("%d",&n);
  o=n;
  do{
    n=(n%10)*10+((n/10+n%10)%10);
    c++;
  }while(n!=o);
  printf("%d",c);
  return 0;
}