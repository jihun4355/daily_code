#include <stdio.h>
#include <limits.h>

int main(void) {
    int N;
    scanf("%d", &N);

    int num;
    int min = INT_MAX;
    int max = INT_MIN;

    for (int i = 0; i < N; i++) {
        scanf("%d", &num);

        if (num < min)
            min = num;
        if (num > max)
            max = num;
    }

    printf("%d %d\n", min, max);
    return 0;
}
