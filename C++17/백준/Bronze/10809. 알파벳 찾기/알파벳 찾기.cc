#include <stdio.h>
int main(){
    char str[101];
    scanf("%s",str);
    char str2[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int arr[26];
    for(int i=0; i<26; i++){
        arr[i]=-1;
    }
    for(int i=0; str[i]!='\0'; i++){
        for(int j=0; j<26; j++){
            if(str[i]==str2[j]&&arr[j]==-1){
                arr[j]=i;
                break;
            }
        }
    }
    for(int i=0; i<26; i++){
        printf("%d ",arr[i]);
    }
    return 0; 
}