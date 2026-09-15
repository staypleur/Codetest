#include <stdio.h>

int main() {
    int s, e;
    scanf("%d %d", &s, &e);
    int cnt = 0;
    for (int i = s; i <= e; i++) {
        int sum = 0;
        for (int j = 1; j < i; j++) {
            if (i % j == 0) {
                sum += j;
            }
            
        }
        if (sum == i) {
            cnt++;
        }
    }
    printf("%d\n", cnt);
    // Please write your code here.
    return 0;
}