#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n][5];
    int arr2[n];
    for(int i=0;i<n;i++)arr2[i]=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<5;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int k=0;k<n;k++){
        for(int j=0;j<n;j++){
            if(k==j)continue;
            for(int i=0;i<5;i++){
                if(arr[k][i]==arr[j][i]){
                    arr2[k]++;
                    break;
                }
            }
        }
    }
    int M=arr2[0],M2=1;
    for(int i=1;i<n;i++){
        if(arr2[i]>M){
            M=arr2[i];
            M2=i+1;
        }
    }
    printf("%d",M2);
    return 0;
}

