#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int arr[n][m];
    int num = 1;


    for (int k = 0; k < n + m - 1; k++) {
        for (int i = 0; i < n; i++) {
            int j = k - i;

            if (j >= 0 && j < m) {
                arr[i][j] = num;
                num++;
            }
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