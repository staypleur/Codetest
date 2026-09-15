#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        int a[4];
        int sum = 0;

        for (int j = 0; j < 4; j++) {
            scanf("%d", &a[j]);
        }

        for (int j = 0; j < 4; j++) {
            sum += a[j];
        }

        double avg = (double)sum / 4;

        if (avg >= 60) {
            printf("pass\n");
            cnt++;
        }
        else {
            printf("fail\n");
        }

    }
    printf("%d\n", cnt);
    // Please write your code here.
    return 0;
}