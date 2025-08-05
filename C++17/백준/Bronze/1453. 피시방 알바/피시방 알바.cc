#include<stdio.h>

int main()
{
    int n,cn=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++){
        int p;
        if(arr[i]!=-1){
            p=arr[i];
            for(int j=0; j<n; j++){
                if(p==arr[j]&&i!=j){
                    arr[j]=-1;
                    cn++;
                }   
            }
        }
        
    }
    printf("%d",cn);
    
   
    return 0;
}
