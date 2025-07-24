
#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d",&t);
    int arr[t];
    char str[t][21];
    for(int i=0; i<t; i++){
        scanf("%d",&arr[i]);
        scanf("%s",str[i]);
    }
    for(int k=0; k<t; k++){
        for(int i=0; str[k][i]!='\0'; i++){
            for(int j=0; j<arr[k]; j++){
                printf("%c",str[k][i]);
            }
        }
        printf("\n");
    }
    
    return 0;
}