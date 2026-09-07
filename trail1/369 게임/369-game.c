#include <stdio.h>

int main(void) {
    int N, i, n, check;

    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        check = 0;

        if (i % 3 == 0)
            check = 1;

        for (n = i; n > 0; n /= 10) {
            if (n % 10 == 3 || n % 10 == 6 || n % 10 == 9)
                check = 1;
        }

        if (check)
            printf("0 ");
        else
            printf("%d ", i);
    }

    return 0;
}