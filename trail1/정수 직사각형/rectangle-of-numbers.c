#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int num = 1;
    int arr[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            arr[i][j] = num;
            num++;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    // Please write your code here.
    return 0;
}