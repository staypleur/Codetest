#include <stdio.h>
#include <string.h>

int main() {
    char str[1001];
    char target[1001];

    scanf("%s %s", str, target);

    int len1 = strlen(str);
    int len2 = strlen(target);
    int cnt = 0;

    for (int i = 0; i <= len1 - len2; i++) {
        int check = 1;

        for (int j = 0; j < len2; j++) {
            if (str[i + j] != target[j]) {
                check = 0;
                break;
            }
        }

        if (check == 1) {
            cnt++;
        }
    }

    printf("%d", cnt);

    return 0;
}