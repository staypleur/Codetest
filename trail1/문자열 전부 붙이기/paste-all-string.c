#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    char str[n][100];
    for (int i = 0; i < n; i++) {
        scanf("%s", str[i]);
        printf("%s", str[i]);
    }
    // Please write your code here.
    return 0;
}