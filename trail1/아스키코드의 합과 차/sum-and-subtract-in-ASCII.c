#include <stdio.h>

int main() {
    char str1, str2;
    scanf(" %c %c", &str1, &str2);

    printf("%d ", str1 + str2);

    if ((int)str1 > (int)str2) {
        printf("%d ", str1 - str2);
    }
    else {
        printf("%d ", str2 - str1);
    }
    // Please write your code here.
    return 0;
}