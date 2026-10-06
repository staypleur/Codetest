#include <stdio.h>
#include <string.h>

int main() {

    char str[20];
    scanf("%s", str);

    int len = strlen(str);
    char c1 = str[0];
    char c2 = str[1];

    for (int i = 0; i < len; i++) {
        if (str[i] == c1) {
            str[i] = c2;
        }
        else if (str[i] == c2) {
            str[i] = c1;
        }
    }

    printf("%s", str);
    // Please write your code here.
    return 0;
}