#include <stdio.h>

int main() {
    int n, q;
    scanf("%d %d", &n, &q);

    int arr[100000];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < q; i++) {
        int type;
        scanf("%d", &type);

        if (type == 1) {
            int a;
            scanf("%d", &a);

            printf("%d\n", arr[a - 1]);
        }

        else if (type == 2) {
            int b;
            scanf("%d", &b);

            int index = 0;

            for (int j = 0; j < n; j++) {
                if (arr[j] == b) {
                    index = j + 1;
                    break;
                }
            }
            printf("%d\n", index);
        }

        else if (type == 3) {
            int s, e;
            scanf("%d %d", &s, &e);

            for (int j = s - 1; j <= e - 1; j++) {
                printf("%d ", arr[j]);
            }

            printf("\n");
        }
    }
    // Please write your code here.
    return 0;
}