#include <stdio.h>

int main(void)
{
   int t;
   scanf("%d",&t);
   char str[t][51];
   for(int i=0; i<t; i++){
       scanf("%s",str[i]);
   }
    for(int i=0; str[0][i]!='\0'; i++){
        int c=0;
        char ch=str[0][i];
        for(int j=0; j<t; j++){
            if(str[j][i]!=ch){
                c=1;
            }
        }
        if(c==1){
            str[0][i]='?';
        }
    }
    printf("%s",str[0]);
    return 0;
}