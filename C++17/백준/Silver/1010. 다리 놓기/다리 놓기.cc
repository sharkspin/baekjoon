#include <stdio.h>

long long comb(int m, int n) {
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= m - i + 1;
        result /= i;
    }
    return result;
}

int main(void)
{
    int t;
    scanf("%d", &t);
    long long re[t];

    for (int i = 0; i < t; i++) {
        int n, m;
        scanf("%d %d", &n, &m);
        re[i] = comb(m, n); 
    }

    for (int i = 0; i < t; i++) {
        printf("%lld\n", re[i]);
    }

    return 0;
}
