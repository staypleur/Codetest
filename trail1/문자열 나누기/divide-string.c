#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    char str[100];
    int cnt = 0;

    for (int i = 0; i < n; i++) {
        scanf("%s", str);

        for (int j = 0; j < strlen(str); j++) {
            printf("%c", str[j]);
            cnt++;

            if (cnt == 5) {
                printf("\n");
                cnt = 0;
            }
        }
    }

    return 0;
}