#include <stdio.h>
int fac(int n);

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int k=a-b;
    int re=fac(a)/(fac(b)*fac(k));
    printf("%d",re);
    return 0; 
}
int fac(int n){
    int sum=1;
    for(int i=n; i>0; i--){
        sum*=i;
    }
    return sum;
}