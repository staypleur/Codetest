#include <stdio.h>

int main() {
    for (int i = 1; i <= 19; i++) {
        for (int j = 1; j <= 19; j++) {
            printf("%d * %d = %d ", i, j, i * j);
            if (j % 2 == 1) {
                if (j == 19) {
                    printf("\n");
                }
                else { 
                    printf("/ ");
                }
            }   
            else {
                printf("\n");
            }
        }
        
    }
    // Please write your code here.
    return 0;
}