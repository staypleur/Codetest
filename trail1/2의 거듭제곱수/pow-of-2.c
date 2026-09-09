#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int prod = 1;
    int cnt = 0;
    while (1) {
        prod *= 2;
        cnt++;
        if (prod == n) {
            printf("%d", cnt);
            break;
        }
    }
    // Please write your code here.
    return 0;
}