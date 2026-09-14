#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < i; j++) {
            printf("  ");
        }
        for (int j = 0; j <= n - i; j++) {
            printf("%d ", n - j - i + 1);
        }
        printf("\n");
    }

    // Please write your code here.
    return 0;
}