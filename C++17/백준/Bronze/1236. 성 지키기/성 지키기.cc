#include<stdio.h>
int main(){
    int a,b;
    char x;
    scanf("%d%d",&a,&b);
    int row[50]={0},col[50]={0};
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            scanf(" %c",&x);
            if(x=='X'){
                row[i]=1;
                col[j]=1;
            }
        }
    }
    int rc=0,cc=0;
    for(int i=0;i<a;i++) if(row[i]==0) rc++;
    for(int j=0;j<b;j++) if(col[j]==0) cc++;
    printf("%d\n",rc>cc?rc:cc);
    return 0;
}
