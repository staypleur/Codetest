#include <stdio.h>
#include <string.h>

int main() {
    char str[20];

    scanf("%s", str);
    char arr[5] = "Hello";

    int len = strlen(str);

    for (int i = 0; i < 5; i++) {
        str[i + len] = arr[i];
    }
    for (int i = 0; i < len + 5; i++) {
        printf("%c", str[i]);
    }
    
    // Please write your code here.
    return 0;
}