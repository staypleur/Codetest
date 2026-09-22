#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int min = arr[n-1];
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[j] - arr[i] < min) {
                min = arr[j] - arr[i];
            }
        }
    }
    printf("%d", min);
    // Please write your code here.
    return 0;
}