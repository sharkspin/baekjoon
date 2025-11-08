
#include <stdio.h>

int main()
{
    int arr[9][9];
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int m=0,mi,mj;
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            if(arr[i][j]>=m){
                m=arr[i][j];
                mi=i+1; 
                mj=j+1;
            }
        }
    }
    printf("%d\n%d %d",m,mi,mj);
    return 0;
}