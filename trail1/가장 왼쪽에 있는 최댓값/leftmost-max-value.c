#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int end = n;

    while (1) {
        int max1 = arr[0];
        int max_idx = 0;

        for (int i = 1; i < end; i++) {
            if (arr[i] > max1) {
                max1 = arr[i];
                max_idx = i;
            }
        }

        printf("%d ", max_idx + 1);

        if (max_idx == 0) {
            break;
        }
        
        end = max_idx;
    }
    
    //write your code here.
    return 0;
}