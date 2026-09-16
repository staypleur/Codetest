#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    int cnt = 0;
    int b[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            b[cnt] = a[i];
            cnt++;
        }
    }
    for (int i = 0; i < cnt; i++) {
        printf("%d ", b[i]);
    }
    // Please write your code here.
    return 0;
}