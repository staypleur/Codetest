#include <stdio.h>
#include <string.h>

int main() {
    char str[1001];
    int q;

    scanf("%s %d", str, &q);

    int len = strlen(str);

    for (int i = 0; i < q; i++) {
        int n;
        scanf("%d", &n);

        if (n == 1) {
            
            char temp = str[0];

            for (int j = 0; j < len - 1; j++) {
                str[j] = str[j + 1];
            }

            str[len - 1] = temp;
        }

        else if (n == 2) {
            
            char temp = str[len - 1];

            for (int j = len - 1; j > 0; j--) {
                str[j] = str[j - 1];
            }

            str[0] = temp;
        }

        else if (n == 3) {
            
            for (int j = 0; j < len / 2; j++) {
                char temp = str[j];
                str[j] = str[len - 1 - j];
                str[len - 1 - j] = temp;
            }
        }

        printf("%s\n", str);
    }

    return 0;
}