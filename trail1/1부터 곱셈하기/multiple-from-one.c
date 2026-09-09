#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int prod = 1;
    for (int i = 1; i <= 10; i++) {
        prod *= i;
        if (prod >= n) {
            printf("%d", i);
            break;
        }
    }
    // Please write your code here.
    return 0;
}