#include <stdio.h>
#include <string.h>

int main() {
    char a[100], b[100];
    char str1[200], str2[200];

    scanf("%s", a);
    scanf("%s", b);

    strcpy(str1, a);
    strcat(str1, b);

    strcpy(str2, b);
    strcat(str2, a);

    if (strcmp(str1, str2) == 0) {
        printf("true");
    }
    else {
        printf("false");
    }

    return 0;
}
