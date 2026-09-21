#include <stdio.h>

int main() {
    int arr[10];
    int max_val = 0;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);

        
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
    }
    printf("%d", max_val);
    // Please write your code here.
    return 0;
}