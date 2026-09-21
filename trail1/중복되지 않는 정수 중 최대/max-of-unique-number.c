#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = -1;

    for (int i = 0; i < n; i++) {
        int cnt = 0;

        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                cnt++;
            }
        }

        if (cnt == 1 && arr[i] > max) {
            max = arr[i];
        }
    }

    printf("%d", max);
    // Please write your code here.
    return 0;
}