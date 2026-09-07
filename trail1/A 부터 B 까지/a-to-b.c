#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int i = a;
    while (i <= b) {
        if (i % 2 == 1) {
            printf("%d ", i);
            i *= 2;
        }
        else if (i % 2 == 0) {
            printf("%d ", i);
            i += 3;
        }
    }
    // Please write your code here.
    return 0;
}