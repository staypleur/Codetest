#include <stdio.h>
#include <string.h>

int main() {

    char str[100];
    scanf("%s", str);
    int len = strlen(str);

    int c = str[1];
    for (int i = 0; i < len; i++) {
        if (str[i] == c) {
            str[i] = str[0];
        }
    }

    printf("%s", str);
    // Please write your code here.
    return 0;
}