#include <stdio.h>
#include <string.h>

int main() {
    char ch[100];
    int n;
    scanf("%s", ch);
    scanf("%d", &n);

    int len = strlen(ch);

    for (int i = len-1; i >= 0 && i >= len - n; i--) {
        printf("%c", ch[i]);
    }
    // Please write your code here.
    return 0;
}