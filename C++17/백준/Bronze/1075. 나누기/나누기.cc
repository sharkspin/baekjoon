#include <stdio.h>

int main()
{
    int N, F;
    scanf("%d %d", &N, &F);
    
    int base = (N / 100) * 100;  
    int result;
    
    for (int i = 0; i < 100; i++) {
        if ((base + i) % F == 0) {
            result = i;
            break;
        }
    }
    
    printf("%02d\n", result);
    return 0;
}