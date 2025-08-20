#include <stdio.h>
#include <string.h>
int main(){
    char s[501];scanf("%s",s);
    char ans[2001]="";int len=strlen(s);
    for(int i=0;i<len;){
        if(s[i]=='.'){strcat(ans,".");i++;}
        else{
            int j=i;while(j<len&&s[j]=='X')j++;
            int cnt=j-i;
            if(cnt%2){printf("-1");return 0;}
            while(cnt>=4){strcat(ans,"AAAA");cnt-=4;}
            if(cnt==2)strcat(ans,"BB");
            i=j;
        }
    }
    printf("%s",ans);
    return 0;
}