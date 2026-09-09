#include <stdio.h>

int main() {
    int n;
    int a;
    scanf("%d", &n);
    a = n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < a; j++) {
            for (int k = 0; k < a; k++) {
                printf("*");
            }
            printf(" ");
            
        }

        printf("\n");
        a -= 1;
        
    }
    // Please write your code here.
    return 0;
}