#include <stdio.h>

int main() {
    char arr1[3];
    int arr2[3];
    int cnt_A = 0;
    int cnt_B = 0;
    int cnt_C = 0;
    int cnt_D = 0;

    for (int i = 0; i < 3; i++) {
        scanf(" %c %d", &arr1[i], &arr2[i]);
        
        if (arr1[i] == 'Y' && arr2[i] >= 37) {
            cnt_A++;
        }
        else if (arr1[i] == 'N' && arr2[i] >= 37) {
            cnt_B++;
        }
        else if (arr1[i] == 'Y' && arr2[i] < 37) {
            cnt_C++;
        }
        else if (arr1[i] == 'N' && arr2[i] < 37) {
            cnt_D++;
        }
    }


    printf("%d %d %d %d ", cnt_A, cnt_B, cnt_C, cnt_D);
    if (cnt_A >= 2) {
        printf("E ");
    }
    // Please write your code here.
    return 0;
}