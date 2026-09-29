#include <stdio.h>

int main() {
    char str[10][100];

    for (int i = 0; i < 10; i++) {
        scanf("%s", str[i]);
    }

    for (int i = 9; i >= 0; i--) {
        printf("%s\n", str[i]);
    }
    // Please write your code here.
    return 0;
}