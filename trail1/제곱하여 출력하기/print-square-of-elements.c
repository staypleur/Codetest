#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        a[i] *= a[i];
        printf("%d ", a[i]);
    } 


    // Please write your code here.
    return 0;
}