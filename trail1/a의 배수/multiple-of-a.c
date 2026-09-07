#include <stdio.h>

int main() {
    int n ,a;
    scanf("%d %d", &n, &a);
    int i = 1;
    while (i <= n) {
        if (i % a == 0) {
            printf("1\n");
        }
        else {
            printf("0\n");
        }
        i++;
    }
    // Please write your code here.
    return 0;
}