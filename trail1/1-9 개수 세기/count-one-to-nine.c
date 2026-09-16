#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    int cnt_a[10] = { 0, };

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++) {
        cnt_a[a[i]]++;
    }

    for (int i = 1; i < 10; i++) {
        printf("%d\n", cnt_a[i]);
    }
    // Please write your code here.
    return 0;
}