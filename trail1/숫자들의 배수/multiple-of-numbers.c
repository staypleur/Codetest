#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[100];
    int cnt = 0;
    for (int i = 0; i < 100; i++) {
        a[i] = n * (i + 1);
        printf("%d ", a[i]);
        if (a[i] % 5 == 0) {
            cnt++;
            if (cnt == 2) {
                break;
            }
        }
        
    }
    // Please write your code here.
    return 0;
}