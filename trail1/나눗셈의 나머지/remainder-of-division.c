#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int arr[100];
    int cnt[100] = {0,};
    int sum = 0;

    while (a > 1) {
        cnt[a % b]++;
        a /= b;
    }

    for (int i = 0; i < b; i++) {
        sum += cnt[i] * cnt[i];
    }

    printf("%d", sum);
    // Please write your code here.
    return 0;
}