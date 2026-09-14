#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int cnt = 0;
    int c = b;
    for (int i = a; i < b; i++) {
        if (i % 2 == 0) {
            cnt++;
        }
    }
    for (int i = 1; i <= 9; i++) {
        for (int j = 0; j <= cnt; j++) {
            printf("%d * %d = %d ", c, i, c * i);
            c -= 2;
            if (c == a -2) {
                c = b;
            }
            if (j < cnt) {
                printf("/ ");
            }
        }
        printf("\n");
    }

    // Please write your code here.
    return 0;
}