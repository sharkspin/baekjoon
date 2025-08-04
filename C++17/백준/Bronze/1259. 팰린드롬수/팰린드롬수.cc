
#include <stdio.h>

int main()
{
    int arr[100000];
    int a=0;
   while(1){
       char s[7];
       int i;
       scanf("%s",s);
       if(s[0]=='0'){
           break;
       }
       for(i=0; s[i]!='\0'; i++){
       }
       int p1=0,p2=i-1;
       while(p1<p2){
           if(s[p1++]!=s[p2--]){
               arr[a]=1;
               break;
           }
       }
       a++;
   }
   for(int i=0; i<a; i++){
       if(arr[i]==0){
           printf("yes\n");
       }else{
           printf("no\n");
       }
   }

    return 0;
}