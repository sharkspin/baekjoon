#include <stdio.h>


int main(){
    int n, m;
    scanf("%d %d", &n, &m);


    int bad[201][201] = {0};


    for(int i=0; i<m; i++){
        int a, b;
        scanf("%d %d", &a, &b);
        bad[a][b] = 1;
        bad[b][a] = 1;
    }


    int cnt = 0;
    for(int i=1; i<=n; i++){
        for(int j=i+1; j<=n; j++){
            if(bad[i][j]) continue;
            for(int k=j+1; k<=n; k++){
                if(bad[i][k] || bad[j][k]) continue;
                cnt++;
            }
        }
    }


    printf("%d", cnt);
    return 0;
}