#include <stdio.h>

int main() {
    int n;
    
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i % 2 == 0) {
                printf("%d ", n * i + j);
                
            }
            else {
                printf("%d ", n * i + n - j + 1);
            }
        }
        printf("\n");
    }
    // Please write your code here.
    return 0;
}