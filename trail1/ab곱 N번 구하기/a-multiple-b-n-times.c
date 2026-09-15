#include <stdio.h>

int main() {
    int n; 
    scanf("%d", &n);
    int a, b;
    int prod = 1;
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &a, &b);
        for (int j = a; j <= b; j++) {
            prod *= j;

        }
        printf("%d\n", prod);
        prod = 1;
    }
    // Please write your code here.
    return 0;
}