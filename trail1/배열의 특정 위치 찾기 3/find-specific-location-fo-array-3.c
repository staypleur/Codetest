#include <stdio.h>

int main() {
    int a[100];
    int sum = 0;
    for (int i = 0; i < 100; i++) {
        scanf("%d", &a[i]);
        if (a[i] == 0) {
            
            sum = sum + a[i-1] + a[i-2] + a[i-3];
            printf("%d", sum);
            break;
        }
    }
    // Please write your code here.
    return 0;
}