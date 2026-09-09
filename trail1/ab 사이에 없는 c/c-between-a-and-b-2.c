#include <stdio.h>
#include <stdbool.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    bool sat = true;
    for (int i = a; i <= b; i++) {
        if (i % c == 0) {
            sat = false;
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