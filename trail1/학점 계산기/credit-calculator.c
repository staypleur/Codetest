#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    double a[n];
    double sum = 0;
    for (int i = 0; i < n; i++) {
        scanf("%lf", &a[i]);
        sum += a[i];
    }
    double avg = sum / n;
    printf("%.1lf\n", avg);
    if (avg >= 4.0) {
        printf("Perfect");
    }
    else if (avg >= 3.0) {
        printf("Good");
    }
    else {
        printf("Poor");
    }
    // Please write your code here.
    return 0;
}