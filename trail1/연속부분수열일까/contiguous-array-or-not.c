#include <stdio.h>

int main() {
    int a, b;

    scanf("%d %d", &a, &b);

    int arr1[100];
    int arr2[100];

    for (int i = 0; i < a; i++) {
        scanf("%d", &arr1[i]);
    }

    for (int i = 0; i < b; i++) {
        scanf("%d", &arr2[i]);
    }

    int check = 0;

    for (int i = 0; i <= a - b; i++) {
        int cnt = 0;

        for (int j = 0; j < b; j++) {
            if (arr1[i + j] == arr2[j]) {
                cnt++;
            }
        }

        if (cnt == b) {
            check = 1;
            break;
        }
    }

    if (check == 1) {
        printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}