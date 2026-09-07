#include <stdio.h>

int main() {
    int cnt = 0;
    int n;
    for (int i = 1; i <= 10; i++) {

        scanf("%d", &n);
        if (n % 2 == 1) {
            cnt++;
        }
    }
    printf("%d", cnt);
    // Please write your code here.
    return 0;
}