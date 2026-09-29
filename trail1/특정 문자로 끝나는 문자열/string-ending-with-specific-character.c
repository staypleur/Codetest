#include <stdio.h>
#include <string.h>

int main() {
    char str[10][100];
    char ch;
    int cnt = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%s", str[i]);
    }

    scanf(" %c", &ch);

    for (int i = 0; i < 10; i++) {
        int len = strlen(str[i]);

        if (str[i][len - 1] == ch) {
            printf("%s\n", str[i]);
            cnt++;
        }
    }

    if (cnt == 0) {
        printf("None");
    }

    return 0;
}