#include <stdio.h>
#include <stdbool.h>

int main() {
    int a, b;
    bool sat = false;
    scanf("%d %d", &a, &b);
    for (int i = a; i <= b; i++) {
        if (1920 % i == 0 && 2880 % i == 0) {
            sat = true;
        }
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