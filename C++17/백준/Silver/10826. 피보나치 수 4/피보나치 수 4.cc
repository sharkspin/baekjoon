#include <stdio.h>
#include <string.h>
#define MAX 10000
char fib[10001][MAX];
void add(char *a,char *b,char *res){
    int la=strlen(a),lb=strlen(b),i=0,carry=0;
    while(i<la||i<lb||carry){
        int x=carry;
        if(i<la)x+=a[la-1-i]-'0';
        if(i<lb)x+=b[lb-1-i]-'0';
        res[i]=x%10+'0';
        carry=x/10;
        i++;
    }
    res[i]='\0';
    for(int j=0;j<i/2;j++){
        char t=res[j];res[j]=res[i-1-j];res[i-1-j]=t;
    }
}
int main(){
    int n;scanf("%d",&n);
    strcpy(fib[0],"0");
    strcpy(fib[1],"1");
    for(int i=2;i<=n;i++)add(fib[i-1],fib[i-2],fib[i]);
    printf("%s",fib[n]);
    return 0;
}