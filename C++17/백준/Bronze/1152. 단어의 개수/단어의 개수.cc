#include<stdio.h>

int main()
{
    char str[1000001];
    fgets(str,sizeof(str),stdin);
    int i=0;
    while(str[i]!='\0'){
        if(str[i]=='\n'){
            str[i]='\0';
            break;
        }
        i++;
    }
    int cn=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]!=' '&&(i==0||str[i-1]==' ')){
            cn++;
        }
    }
    printf("%d",cn);
    return 0;
}
