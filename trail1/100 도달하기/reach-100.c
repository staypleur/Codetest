#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[100];
    a[0] = 1;
    a[1] = n;
    int cnt = 0;
    for (int i = 2; i < 100; i++) {
        a[i] = a[i - 1] + a[i - 2];
        if (a[i] > 100) {
            break;
        }
        cnt++;
    }

    for (int i = 0; i < cnt + 3; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}