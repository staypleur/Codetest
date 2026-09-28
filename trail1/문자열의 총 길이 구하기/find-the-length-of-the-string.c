#include <stdio.h>
#include <string.h>

int main() {
    char str[10][200];

    int sum = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%s", str[i]);
        sum += strlen(str[i]);
    }

    printf("%d", sum);
    // Please write your code here.
    return 0;
}