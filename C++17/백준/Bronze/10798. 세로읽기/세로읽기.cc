#include <stdio.h>
int main(){
  char s[5][16]={0};
  for(int i=0;i<5;i++){
    scanf("%15s",s[i]);
  }
  for(int c=0;c<15;c++){
    for(int r=0;r<5;r++){
      if(s[r][c]){
        putchar(s[r][c]);
      }
    }
  }
  return 0;
}