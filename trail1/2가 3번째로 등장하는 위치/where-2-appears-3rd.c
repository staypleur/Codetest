#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int cnt = 0;
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] == 2) {
            cnt++;
            if (cnt == 3) {
                printf("%d", i + 1);
            }
        }
    }

    
    // Please write your code here.
    return 0;
}