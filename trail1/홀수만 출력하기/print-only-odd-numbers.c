#include <stdio.h>

int main() {
    int n;
    int y;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &y);
        if (y % 2 == 1 && y % 3 == 0) {
            printf("%d\n", y);
        }
    }
    // Please write your code here.
    return 0;
}