#include <stdio.h>
#include <string.h>

int main() {
    char ch[100];
    scanf("%s", ch);

    int len = strlen(ch);

    for (int i = len; i >= 1; i--) {
        if (i % 2 == 0) {
            printf("%c", ch[i-1]);
        }
    }
    // Please write your code here.
    return 0;
}