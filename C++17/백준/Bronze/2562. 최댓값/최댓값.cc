#include <stdio.h>

int main()
{
    int arr[9];
    int i, max = 0, mindex = 0;

    for (i = 0; i < 9; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] > max) {
            max = arr[i];
            mindex = i + 1; 
        }
    }

    printf("%d\n%d\n", max, mindex);

    return 0;
}
