#include <stdio.h>

int main() {
    int c, b;
    scanf("%d %d", &c, &b);
    int a[10];
    a[0] = c;
    a[1] = b;
    printf("%d %d ", a[0], a[1]);
    for (int i = 2; i < 10; i++) {
        a[i] = a[i - 1] + a[i - 2];
        if (a[i] >= 10) {
            a[i] -= 10;
        }
        printf("%d ", a[i]);
    }
    // Please write your code here.
    return 0;
}