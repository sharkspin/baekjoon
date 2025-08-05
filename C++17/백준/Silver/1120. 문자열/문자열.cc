#include<stdio.h>

int main()
{
    char s1[51],s2[51];
    int min=51;
    scanf("%s %s",s1,s2);
    int len1=0,len2=0;
    for(int i=0; s1[i]; i++)len1++;
    for(int i=0; s2[i]; i++)len2++;
    
    for(int i=0; i<=len2-len1; i++){
        int d=0;
        for(int j=0; j<len1; j++){
            if(s1[j]!=s2[i+j]){
                d++;
            }
        }
        if(d<min){
            min=d;
        }
    }
    printf("%d",min);
    
    
   
    return 0;
}
