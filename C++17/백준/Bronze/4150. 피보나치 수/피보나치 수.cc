#include <stdio.h>
#include <string.h>
#define MAX 10005
void add(const char*a,const char*b,char*r){
  int la=strlen(a),lb=strlen(b),i=0,c=0;
  while(i<la||i<lb||c){
    int x=c;
    if(i<la)x+=a[la-1-i]-'0';
    if(i<lb)x+=b[lb-1-i]-'0';
    r[i]=x%10+'0';
    c=x/10;
    i++;
  }
  r[i]='\0';
  for(int j=0;j<i/2;j++){char t=r[j];r[j]=r[i-1-j];r[i-1-j]=t;}
}
int main(){
  int n;scanf("%d",&n);
  if(n==0){puts("0");return 0;}
  if(n==1){puts("1");return 0;}
  char a[MAX],b[MAX],c[MAX];
  strcpy(a,"0");strcpy(b,"1");
  for(int i=2;i<=n;i++){add(a,b,c);strcpy(a,b);strcpy(b,c);}
  puts(b);
  return 0;
}