#include <stdio.h>
#include <stdbool.h>

int main() {
    int a, b, c, d, e;
    scanf("%d\n%d\n%d\n%d\n%d", &a, &b, &c, &d, &e);
    bool sat = false;
    if (a % 3 == 0 && b % 3 == 0 && c % 3 == 0 && d % 3 == 0 && e % 3 == 0) {
        sat = true;
    }

    if (sat == true) {
        printf("1");
    }
    else {
        printf("0");
    }
    // Please write your code here.
    return 0;
}