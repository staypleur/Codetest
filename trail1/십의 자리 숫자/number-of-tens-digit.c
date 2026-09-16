#include <stdio.h>

int main() {
    int arr[100];
    int cnt = 0;

    int cnt_arr[10] = {0,};

    for (int i = 0; i < 100; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] == 0) {
            break;
        }
        cnt_arr[arr[i] / 10]++;
    }

    for (int i = 1; i <= 9; i++) {
        printf("%d - %d\n", i, cnt_arr[i]);
    }
    // Please write your code here.
    return 0;
}