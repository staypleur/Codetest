#include <stdio.h>

int main() {
    int a[10];
    int cnt = 0;
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
        if (a[i] == 0) {
            break;
        }
        if (a[i] % 2 == 0) {
            cnt++;
            sum += a[i];
        }
    }
    printf("%d %d", cnt, sum);
    // Please write your code here.
    return 0;
}