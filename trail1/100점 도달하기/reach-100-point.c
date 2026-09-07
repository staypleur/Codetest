#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    for (int i = a; i <= 100; i++) {
        if (i >= 90) {
            printf("%c ", 'A');
        }
        else if (i >= 80) {
            printf("%c ", 'B');
        }
        else if (i >= 70) {
            printf("%c ", 'C');
        }
        else if (i >= 60) {
            printf("%c ", 'D');
        }
        else {
            printf("%c ", 'F');
        }
    }
    // Please write your code here.
    return 0;
}