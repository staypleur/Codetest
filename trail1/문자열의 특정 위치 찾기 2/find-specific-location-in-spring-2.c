#include <stdio.h>

int main() {
    char str[5][20] = {
        "apple",
        "banana",
        "grape",
        "blueberry",
        "orange"
    };

    char ch;
    int cnt = 0;

    scanf(" %c", &ch);

    for (int i = 0; i < 5; i++) {
        if (str[i][2] == ch || str[i][3] == ch) {
            printf("%s\n", str[i]);
            cnt++;
        }
    }

    printf("%d", cnt);

    return 0;
}