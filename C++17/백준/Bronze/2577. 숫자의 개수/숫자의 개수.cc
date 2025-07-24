#include<stdio.h>
int main()
{
    int a,b,c;
    int arr[10]={0,};
    scanf("%d %d %d",&a,&b,&c);
    int n=a*b*c;
    int n1=n;
    int cn=0;
    if(n==0){
       cn=1;
    }
    while (n1>0){
       n1/=10;
       cn++;
    }
    char str[cn];
    sprintf(str,"%d",n);
    for(int i=0; i<cn; i++){
       arr[str[i]-48]++;
    }
    for(int i=0; i<10; i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}