#include <stdio.h>

int main() {
    int arr[100];
    int cnt_arr[11] = {0,};
    int cnt = 0;
    for (int i = 0; i < 100; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] == 0) {
            break;
        }
        cnt++;
    } 

    for (int i = 0; i < cnt; i++) {
        cnt_arr[arr[i] / 10]++;

    }

    for (int i = 10; i >= 1; i--) {
        printf("%d - %d\n", i * 10, cnt_arr[i]);
    }
    // Please write your code here.
    return 0;
}