#include <stdio.h>

int main() {
    int n;
    int cnt = 1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < n; j++) {
                printf("%d ", cnt);
                cnt++;
            }
            cnt++;
        }
        else {
            for (int j = 0; j < n; j++) {
                printf("%d ", cnt);
                cnt += 2;
            }
            cnt--;
        }
        printf("\n");
    }
    // Please write your code here.
    return 0;
}