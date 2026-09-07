#include <stdio.h>

int main() {
    int a, b;
    int sum = 0;
    int cnt = 0;
    scanf("%d %d", &a, &b);
    for (int i = a; i <= b; i++) {
        if (i % 5 == 0 || i % 7 == 0) {
            sum += i;
            cnt += 1;
        }
    }
    printf("%d %.1lf", sum, (double)sum / cnt);
    // Please write your code here.
    return 0;
}