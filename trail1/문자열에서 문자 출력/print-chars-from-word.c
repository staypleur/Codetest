#include <stdio.h>
#include <string.h>

int main() {
    char str[10];
    scanf("%s", str);

    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        printf("%c\n", str[i]);
    }
    // Please write your code here.
    return 0;
}