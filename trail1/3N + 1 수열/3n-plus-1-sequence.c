#include <stdio.h>

int main() {
    int n;
    int cnt = 0;
    scanf("%d", &n);
    while (1) {
        if (n == 1) {
            break;
        }
        
        if (n % 2 == 1) {
            n = n * 3 + 1;
        }

        else {
            n = n / 2;
        }
        cnt++;

    }
    printf("%d\n", cnt);
    
    // Please write your code here.
    return 0;
}