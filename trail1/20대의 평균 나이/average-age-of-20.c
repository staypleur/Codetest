#include <stdio.h>

int main() {
    int a;
    int sum = 0;
    int cnt = 0;
    while (1) {
        scanf("%d", &a);
        if (a >= 20 && a <= 29) {
            cnt++;
            sum += a;
            continue;
        }
        printf("%.2lf", (double)sum / cnt);
        break;

    }
    // Please write your code here.
    return 0;
}