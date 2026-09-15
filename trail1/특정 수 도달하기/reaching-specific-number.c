#include <stdio.h>

int main() {
    int a[10];
    int cnt = 0;
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
        if (a[i] >= 250) {
            break;
        }
        cnt++;
        sum += a[i];
    }
    printf("%d %.1lf", sum, (double)sum / cnt);
    // Please write your code here.
    return 0;
}