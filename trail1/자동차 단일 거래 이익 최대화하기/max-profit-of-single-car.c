#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    int end = 1;
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    
    int max = 0;

    for (int i = 0; i < n-1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] < arr[j] && arr[j] - arr[i] > max) {
                max = arr[j] - arr[i];
            }
        }
            
    }
    printf("%d", max);
    
    
    // Please write your code here.
    return 0;
}