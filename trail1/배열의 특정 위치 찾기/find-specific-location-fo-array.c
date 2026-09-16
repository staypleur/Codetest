#include <stdio.h>

int main() {
    int a[10];
    for (int i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 1) {
            sum += a[i];
        }
    }
    int sum2 = 0;
    int cnt = 0;
    for (int i = 2; i < 10; i += 3) {
        sum2 += a[i];
        cnt++;
    }
    printf("%d %.1lf", sum, (double)sum2 / cnt);
    // Please write your code here.
    return 0;
}