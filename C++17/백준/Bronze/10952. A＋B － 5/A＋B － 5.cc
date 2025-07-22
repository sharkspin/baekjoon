
#include <stdio.h>

int main()
{
    int c=0,arr[100];
   while(1){
       int a,b; 
       
       scanf("%d %d",&a,&b);
       if(a==0,b==0){
           break;
       }
       arr[c]=a+b;
       c++;
   }
   for(int i=0; i<c; i++){
       printf("%d\n",arr[i]);
   }
   
   
    return 0;
}