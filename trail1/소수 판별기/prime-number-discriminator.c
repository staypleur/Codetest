#include <stdio.h>
#include <stdbool.h>

int main() {
    bool sat = true;
    int n;
    scanf("%d", &n);
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            sat = false;
        }
    }
    // Please write your code here.
    if (sat ==  true) {
        printf("P");
    }
    else {
        printf("C");
    }
    return 0;
}