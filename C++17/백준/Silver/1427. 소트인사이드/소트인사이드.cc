#include<stdio.h>

int main()
{
   char s[11];
   scanf("%s",s);
   int len=0;
   for(int i=0; i<s[i]; i++)len++;
   int arr[len];
   for(int i=0; i<len; i++)arr[i]=s[i]-'0';
   int temp;
   for(int i=0; i<len; i++){
       for(int j=i+1; j<len; j++){
           if(arr[i]<arr[j]){
               temp=arr[i];
               arr[i]=arr[j];
               arr[j]=temp;
           }
       }
   }
   for(int i=0; i<len; i++){
       printf("%d",arr[i]);
   }
    
   
    return 0;
}
