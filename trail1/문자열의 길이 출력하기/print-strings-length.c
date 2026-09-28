#include <stdio.h>
#include <string.h>

int main() {
    char str1[100];
    char str2[100];

    scanf(" %s", str1);
    scanf(" %s", str2);
    int sum = 0;

    sum += strlen(str1);
    sum += strlen(str2);

    printf("%d", sum);
    


    // Please write your code here.
    return 0;
}