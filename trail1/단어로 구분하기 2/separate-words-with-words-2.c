#include <stdio.h>

int main() {
    char str[10][100];

    int cnt = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%s", str[i]);
        cnt++;

        if (cnt % 2 == 1) {
            printf("%s\n", str[i]);
        }
    }
    // Please write your code here.
    return 0;
}