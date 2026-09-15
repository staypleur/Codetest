#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%c", 65 + cnt);
            cnt++;
        }
        printf("\n");
    }
    // Please write your code here.
    return 0;
}