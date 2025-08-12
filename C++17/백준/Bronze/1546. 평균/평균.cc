#include <stdio.h>
int main()
{
  int n;scanf("%d",&n);
  int arr[n];int m=0;long long sum=0;
  for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    if(arr[i]>m)m=arr[i];
    sum+=arr[i];
  }
  if(m==0){printf("0.000000");return 0;}
  double avg=(double)sum/n;
  double ans=avg/m*100.0;
  printf("%.6f",ans);
  return 0;
}