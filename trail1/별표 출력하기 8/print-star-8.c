#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            printf("*\n");
        }
        else {
            for (int j = 0; j < i + 1; j++) {
                printf("* ");
            }
            printf("\n");
        }
    }
    // Please write your code here.
    return 0;
}