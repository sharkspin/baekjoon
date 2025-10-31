#include <stdio.h>
#include <string.h>

int main(){
    char num[10];
    while(1){
        scanf("%s",num);
        if(strcmp(num,"0")==0) break;
        int len=strlen(num);
        int width=2;
        for(int i=0;i<len;i++){
            if(num[i]=='1') width+=2;
            else if(num[i]=='0') width+=4;
            else width+=3;
            width+=1;
        }
        width-=1;
        printf("%d\n",width);
    }
    return 0;
}