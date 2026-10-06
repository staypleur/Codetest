#include <stdio.h>
#include <string.h>

int main() {
    char str1[20];
    char str2[20];

    scanf("%s %s", str1, str2);

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    str2[0] = str1[0];
    str2[1] = str1[1];

    printf("%s", str2);
    // Please write your code here.
    return 0;
}