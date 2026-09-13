#include <stdio.h>

int main(void) {
    int N;
    int i, j;

    scanf("%d", &N);

    // 위쪽 부분
    for (i = 1; i <= N; i++) {
        for (j = 1; j <= N - i; j++) {
            printf("  ");
        }

        for (j = 1; j <= i; j++) {
            printf("@ ");
        }

        printf("\n");
    }

    // 아래쪽 부분
    for (i = N - 1; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("@ ");
        }

        printf("\n");
    }

    return 0;
}