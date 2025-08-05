#include<stdio.h>

int main()
{
    char str[1000001];
    int count[26]={0};
    scanf("%s",str);
    for(int i=0;str[i];i++){
        char ch=str[i];
        if(ch>='a'&&ch<='z')ch-=32;
        count[ch-'A']++;
    }

    int max=0;
    char result='?';
    for(int i=0;i<26;i++){
        if(count[i]>max){
            max=count[i];
            result='A'+i;
        }else if(count[i]==max){
            result='?';
        }
    }

    printf("%c",result);
    return 0;
}
