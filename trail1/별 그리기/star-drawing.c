#include <stdio.h>

int main(void) {
    int N;
    int i, j;

    scanf("%d", &N);

    // 위쪽 삼각형
    for (i = 1; i <= N; i++) {
        // 공백 출력
        for (j = 1; j <= N - i; j++) {
            printf(" ");
        }

        // 별 출력
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    // 아래쪽 삼각형
    for (i = N - 1; i >= 1; i--) {
        // 공백 출력
        for (j = 1; j <= N - i; j++) {
            printf(" ");
        }

        // 별 출력
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}