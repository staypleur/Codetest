#include <stdio.h>

int main(void) {
    int a[10];
    int cnt = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &a[i]);

        if (a[i] == 0) {
            break;
        }

        cnt++;
    }

    for (int i = cnt - 1; i >= 0; i--) {
        printf("%d ", a[i]);
    }

    return 0;
}