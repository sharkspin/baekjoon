#include <stdio.h>

int main(void) {
    for (int t = 0; t < 3; ++t) {
        int n;
        if (scanf("%d", &n) != 1) return 0;

        __int128 sum = 0;  // 128비트 정수로 합 누적
        for (int i = 0; i < n; ++i) {
            long long x;   // 입력은 long long으로 받아도 됨
            scanf("%lld", &x);
            sum += (__int128)x;
        }

        if (sum > 0) puts("+");
        else if (sum < 0) puts("-");
        else puts("0");
    }
    return 0;
}
