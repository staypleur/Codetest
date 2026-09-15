#include <stdio.h>

int main() {
    int s, e;
    scanf("%d %d", &s, &e);
    int cnt2 = 0;
    for (int i = s; i <= e; i++) {
        int cnt = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                cnt++;
            }
        }
        if (cnt == 3) {
            cnt2++;
        }
    }
    printf("%d\n", cnt2);
    // Please write your code here.
    return 0;
}