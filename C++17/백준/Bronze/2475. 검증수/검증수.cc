
#include <stdio.h>

int main()
{
    int arr[5],sum=0,i;
    for(i=0; i<5; i++){
        scanf("%d",&arr[i]);
        sum+=arr[i]*arr[i];
    }
    printf("%d",sum%10);

    return 0;
}