#include<stdio.h>

int main()
{
    char s[333334];
    char result[1000001];
    int idx=0;
    scanf("%s",s);

    if(s[0]=='0'){
        result[idx++]='0';
    }else{
        switch(s[0]){
            case '1': result[idx++]='1'; break;
            case '2': result[idx++]='1'; result[idx++]='0'; break;
            case '3': result[idx++]='1'; result[idx++]='1'; break;
            case '4': result[idx++]='1'; result[idx++]='0'; result[idx++]='0'; break;
            case '5': result[idx++]='1'; result[idx++]='0'; result[idx++]='1'; break;
            case '6': result[idx++]='1'; result[idx++]='1'; result[idx++]='0'; break;
            case '7': result[idx++]='1'; result[idx++]='1'; result[idx++]='1'; break;
        }
    }

    for(int i=1;s[i];i++){
        switch(s[i]){
            case '0': result[idx++]='0'; result[idx++]='0'; result[idx++]='0'; break;
            case '1': result[idx++]='0'; result[idx++]='0'; result[idx++]='1'; break;
            case '2': result[idx++]='0'; result[idx++]='1'; result[idx++]='0'; break;
            case '3': result[idx++]='0'; result[idx++]='1'; result[idx++]='1'; break;
            case '4': result[idx++]='1'; result[idx++]='0'; result[idx++]='0'; break;
            case '5': result[idx++]='1'; result[idx++]='0'; result[idx++]='1'; break;
            case '6': result[idx++]='1'; result[idx++]='1'; result[idx++]='0'; break;
            case '7': result[idx++]='1'; result[idx++]='1'; result[idx++]='1'; break;
        }
    }

    result[idx]='\0';
    printf("%s",result);
    return 0;
}
