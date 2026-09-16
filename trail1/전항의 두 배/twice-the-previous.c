#include <stdio.h>

int main() {
    int b, c;
    scanf("%d %d", &b, &c);

    int a[10];
    a[0] = b;
    a[1] = c;
    for (int i = 2; i < 10; i++) {
        a[i] = a[i - 1] + 2 * a[i - 2];
    }

    for (int i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }
    // Please write your code here.
    return 0;
}