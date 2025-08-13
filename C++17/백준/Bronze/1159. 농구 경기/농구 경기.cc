#include <stdio.h>
int main(){
  int n;scanf("%d",&n);
  int c[26]={0};char s[31];
  for(int i=0;i<n;i++){scanf("%s",s);c[s[0]-'a']++;}
  int ok=0;
  for(int i=0;i<26;i++){if(c[i]>=5){putchar('a'+i);ok=1;}}
  if(!ok)printf("PREDAJA");
  return 0;
}