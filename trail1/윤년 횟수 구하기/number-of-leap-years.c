#include <stdio.h>

int main() {
    int n;
    int cnt_y = 0;
    int cnt_p = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if (i % 4 == 0) {
            if (i % 100 == 0 && i % 400 != 0) {
                cnt_p++;
            }
            else {
                cnt_y++;
            }
        }
        else {
            cnt_p++;
        }
    }
    printf("%d", cnt_y);
    // Please write your code here.
    return 0;
}