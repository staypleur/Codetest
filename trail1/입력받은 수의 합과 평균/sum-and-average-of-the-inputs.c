#include <stdio.h>

int main() {
    int n;
    int sum = 0;
    int cnt = 0;
    scanf("%d" ,&n);
    for (int i = 1; i <= n; i++) {
        int a;
        scanf("%d" , &a);
        sum += a;
        cnt += 1;
    }
    printf("%d %.1lf", sum, (double)sum / cnt);
    // Please write your code here.
    return 0;
}