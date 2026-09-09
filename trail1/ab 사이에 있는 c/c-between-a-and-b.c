#include <stdio.h>
#include <stdbool.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    bool sat = false;
    for (int i = a; i <= b; i++) {
        if (i % c == 0) {
            sat = true;
        }
    }
    if (sat == true) {
        printf("YES");
    }
    else {
        printf("NO");
    }
    // Please write your code here.
    return 0;
}