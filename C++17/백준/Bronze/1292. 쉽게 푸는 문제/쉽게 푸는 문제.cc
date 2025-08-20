#include <stdio.h>
int main(){
  int A,B;scanf("%d%d",&A,&B);
  int sum=0,pos=1;
  for(int i=1;pos<=B;i++){
    for(int j=0;j<i&&pos<=B;j++,pos++){
      if(pos>=A)sum+=i;
    }
  }
  printf("%d",sum);
  return 0;
}