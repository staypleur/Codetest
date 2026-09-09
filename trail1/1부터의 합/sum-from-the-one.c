#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int sum = 0;
    int a;
    for (int i = 1; i <= 100; i++) {
        sum += i;
        if (sum >= n) {
            a = i;
            break;
        }
    }
    printf("%d", a);
    // Please write your code here.
    return 0;
}