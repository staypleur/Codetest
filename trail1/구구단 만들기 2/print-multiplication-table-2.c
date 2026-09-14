#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int cnt = 2;
    for (int i = 1; i <= 4; i++) {
        for (int j = b; j >= a; j--) {
            
            printf("%d * %d = %d ", j, cnt, j * cnt);
            
            if (j != a) {
                printf("/ ");
            }
        } 
        cnt += 2;
        printf("\n");
        if (cnt == 10) {
                cnt = 1;
        }
    }
    // Please write your code here.
    return 0;
}