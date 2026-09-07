#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int cnt = 0;
    if (a >= b) {
        for (int i = b; i <= a; i++) {
            if (i % 5 == 0) {
                cnt += i;
            }
        }
    }
    else {
        for (int i = a; i <= b; i++) {
            if (i % 5 == 0) {
                cnt += i;
            }
        }
    }
    printf("%d", cnt);
    // Please write your code here.
    return 0;
}