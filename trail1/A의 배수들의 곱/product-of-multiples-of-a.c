#include <stdio.h>

int main() {
    int a, b;
    int prod = 1;
    scanf("%d %d", &a, &b);
    for (int i = 1; i <= b; i++) {
        if (i % a == 0) {
            prod *= i;
        }
    }
    printf("%d", prod);
    // Please write your code here.
    return 0;
}