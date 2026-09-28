#include <stdio.h>
#include <string.h>

int main() {
    char str1[20];
    char str2[20];
    char str3[20];

    scanf(" %s", str1);
    scanf(" %s", str2);
    scanf(" %s", str3);

    if (strlen(str1) > strlen(str2) && strlen(str1) > strlen(str3)) {
        if (strlen(str2) > strlen(str3)) {
            printf("%d", strlen(str1) - strlen(str3));
        }
        else {
            printf("%d", strlen(str1)- strlen(str2));
        }
    }
    else if (strlen(str2) > strlen(str1) && strlen(str2) > strlen(str3)) {
        if (strlen(str1) > strlen(str3)) {
            printf("%d", strlen(str2) - strlen(str3));
        }
        else {
            printf("%d", strlen(str2) - strlen(str1));
        }
    }
    else {
        if (strlen(str1) > strlen(str2)) {
            printf("%d", strlen(str3) - strlen(str2));
        }
        else {
            printf("%d", strlen(str3) - strlen(str1));
        }
    }
    // Please write your code here.
    return 0;
}