#include <stdio.h>
#include <string.h>

int main() {

    char str[100];

    scanf("%s", str);

    int len = strlen(str);

    str[1] = 'a';
    str[len-2] = 'a';

    printf("%s", str);


    // Please write your code here.
    return 0;
}