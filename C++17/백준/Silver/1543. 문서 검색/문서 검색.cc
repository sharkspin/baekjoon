#include<stdio.h>

int main()
{
    char s1[2501],s2[51];
    int len1=0,len2=0,c;
    while((c=getchar())!='\n'&&c!=EOF)s1[len1++]=c;
    while((c=getchar())!='\n'&&c!=EOF)s2[len2++]=c;
    int cn=0;
    for(int i=0;i<=len1-len2;){
        int j=0;
        while(j<len2&&s1[i+j]==s2[j])j++;
        if(j==len2){
            cn++;
            i+=len2;
        }else{
            i++;
        }
    }
    printf("%d",cn);
    return 0;
}
