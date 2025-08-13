#include <stdio.h>
int main(){
  int a[5];
  for(int i=0;i<5;i++){
    scanf("%d",&a[i]);
  }
  for(int n=1;;n++){
    int c=0;
    for(int i=0;i<5;i++){
      if(n%a[i]==0)c++;
    }
    if(c>=3){
      printf("%d",n);
      break;
    }
  }
  return 0;
}