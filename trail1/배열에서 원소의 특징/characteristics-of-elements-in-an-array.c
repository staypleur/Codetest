#include <stdio.h>

int main() {
    int a[10];
    for (int i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
        if (a[i] % 3 == 0) {
            printf("%d", a[i-1]);
            break;
        }
    }
    // Please write your code here.
    return 0;
}