#include <stdio.h>

int main() {
    char str[100];

    for (int i = 0; i < 2; i++) {
        fgets(str, 100, stdin);

        for (int j = 0; str[j] != '\0'; j++) {
            if (str[j] != ' ' && str[j] != '\n') {
                printf("%c", str[j]);
            }
        }
    }
    // Please write your code here.
    return 0;
}