#include <stdio.h>

int main(void)
{
    int arr[10];
    int n=0;
    for(int i=0; i<10; i++){
        int a;
        scanf("%d",&a);
        arr[i]=a%42;
    }
    for(int i=0; i<10; i++){
        for(int j=i+1; j<10; j++){
            if(arr[i]==arr[j]&&arr[i]!=-1){
                arr[j]=-1;
            }
        }
    }
    for(int i=0; i<10; i++){
        if(arr[i]!=-1){
            n++;
        }
    }
    printf("%d",n);
  
    

    return 0;
}