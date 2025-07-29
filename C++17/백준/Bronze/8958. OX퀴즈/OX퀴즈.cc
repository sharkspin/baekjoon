#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d",&t);
    char str[t][80];
    int arr[t]={};
    for(int i=0; i<t; i++){
        scanf("%s",str[i]);
        int n=1;
        for(int j=0; str[i][j]!='\0'; j++){
            if(str[i][j]=='O'){
                arr[i]+=n;
                n++;
            }else{
                n=1;
            }
        }
    }
    for(int i=0; i<t; i++){
        printf("%d\n",arr[i]);
    }

    return 0;
}