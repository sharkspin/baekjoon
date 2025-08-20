#include <stdio.h>
#include <string.h>
int main(){
  int n;scanf("%d",&n);
  char books[1001][51];
  int cnt[1001]={0},idx=0;
  for(int i=0;i<n;i++){
    char t[51];scanf("%s",t);
    int found=0;
    for(int j=0;j<idx;j++){
      if(strcmp(books[j],t)==0){cnt[j]++;found=1;break;}
    }
    if(!found){strcpy(books[idx],t);cnt[idx]++;idx++;}
  }
  int max=0;char ans[51];
  for(int i=0;i<idx;i++){
    if(cnt[i]>max||(cnt[i]==max&&strcmp(books[i],ans)<0)){
      max=cnt[i];strcpy(ans,books[i]);
    }
  }
  printf("%s",ans);
  return 0;
}