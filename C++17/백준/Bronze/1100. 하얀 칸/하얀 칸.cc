#include <stdio.h>

int main(void)
{
  char chess[8][9];
  for(int i=0; i<8; i++){
      scanf("%s",chess[i]);
  }
  int cn=0;
  for(int i=0; i<8; i++){
      for(int j=0; chess[i][j]!='\0'; j++){
          if((i+j)%2==0 && chess[i][j]=='F'){
            cn++;
          }
      }
  }
  printf("%d",cn);
    return 0;
}