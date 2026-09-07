#include <stdio.h>

int main() {
    int sum = 0;
    int cnt = 0;
    for (int i = 0; i < 10; i++) {
        int a;
        scanf("%d", &a);
        if (a >= 0 && a <= 200) {
            sum += a;
            cnt += 1;
        }
    }
    printf("%d %.1lf", sum, (double)sum / cnt);
    // Please write your code here.
    return 0;
}