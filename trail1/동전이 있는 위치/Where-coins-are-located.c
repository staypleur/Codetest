#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    
    int arr[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = 0;
        }        
    }

    for (int i = 0; i < m; i++) {
        int r, c;
        scanf("%d %d", &r, &c);
        arr[r-1][c-1] = 1;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    // Please write your code here.
    return 0;
}