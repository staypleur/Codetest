#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int num;
    scanf("%d", &num);

    int min_val = num;
    int cnt = 1;

    for (int i = 1; i < n; i++) {
        scanf("%d", &num);

        if (num < min_val) {
            min_val = num;
            cnt = 1;
        }
        else if (num == min_val) {
            cnt++;
        }
    }

    printf("%d %d", min_val, cnt);

    return 0;
}