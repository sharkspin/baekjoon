#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d",&n);
    int arr[n],temp;
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("%d",arr[0]*arr[n-1]);
    return 0;
}