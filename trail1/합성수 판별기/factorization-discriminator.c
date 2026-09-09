#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    scanf("%d", &n);
    bool sat = false;
    for (int i = 2; i <= n - 1; i++) {
        if (n % i == 0) {
            sat = true;
        }
    }
    if (sat == true) {
        printf("C");
    }
    else {
        printf("N");
    }
    // Please write your code here.
    return 0;
}