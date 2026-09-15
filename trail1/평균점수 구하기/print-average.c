#include <stdio.h>

int main() {
    double a[8];
    double sum = 0;
    for (int i = 0; i < 8; i++) {
        scanf("%lf", &a[i]);
        sum += a[i];
    }
    printf("%.1lf", (double)sum / 8);
    
    // Please write your code here.
    return 0;
}