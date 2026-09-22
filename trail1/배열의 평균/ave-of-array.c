#include <stdio.h>

int main() {
    int arr[2][4];
    int sum = 0;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &arr[i][j]);
            sum += arr[i][j];
        }

    }

    for (int i = 0 ; i < 2; i++) {
        int sum1 = 0;
        for (int j = 0; j < 4; j++) {
            sum1 += arr[i][j];
        }
        printf("%.1f ", (double)sum1 / 4);
        
    }
    printf("\n");


    
    for (int j = 0; j < 4; j++) {
        int sum2 = 0;
        for (int i = 0; i < 2; i++) {
            sum2 += arr[i][j];
        }
        printf("%.1f ", (double)sum2 / 2);
        
    }
    printf("\n");

    printf("%.1f", (double)sum / 8);
    // Please write your code here.
    return 0;
}