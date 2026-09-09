#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int cnt = 0;
    for (int i = 1; i <= 5000; i++) {
        n /= i;
        cnt++;
        if (n <= 1) {
            printf("%d", cnt);
            break;
        }
    }
    // Please write your code here.
    return 0;
}