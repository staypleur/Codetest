#include <stdio.h>

int main() {
    int arr[100];
    int max = 0;
    int min = 999;
    for (int i = 0; i < 100; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] == 999 || arr[i] == -999) {
            break;
        }
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }

    }
    printf("%d %d", max, min);
    // Please write your code here.
    return 0;
}