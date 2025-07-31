#include<stdio.h>

int main()
{
    char s[2][4];
    char reversed[2][4];
    int num[2];

    scanf("%3s%3s",s[0],s[1]);

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            sprintf(&reversed[i][j],"%c",s[i][2-j]);
        }
        reversed[i][3]='\0';
        num[i]=(reversed[i][0]-'0')*100+(reversed[i][1]-'0')*10+(reversed[i][2]-'0');
    }

    if(num[0]>num[1])
        printf("%d\n",num[0]);
    else
        printf("%d\n",num[1]);

    return 0;
}
