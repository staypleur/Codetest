#include <stdio.h>

int main() {
    int arr[4][4];

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int sum = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < i + 1; j++) {
            sum += arr[i][j];
        }
    }
    printf("%d", sum);
    // Please write your code here.
    return 0;
}