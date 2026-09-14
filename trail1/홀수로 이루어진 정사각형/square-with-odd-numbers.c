#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", 11 + 2 * (i + j));
        }
        printf("\n");
    }
    // Please write your code here.
    return 0;
}