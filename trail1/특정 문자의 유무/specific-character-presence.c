#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char str[20];

    scanf("%s", str);
    int length = strlen(str);
    bool exists_ee = false;
    bool exists_ab = false;

    for (int i = 0; i < length - 1; i++) {
        if (str[i] == 'e' && str[i+1] == 'e') {
            exists_ee = true;
        }
        if (str[i] == 'a' && str[i+1] == 'b') {
            exists_ab = true;
        }
    }

    if (exists_ee == true) {
        printf("Yes ");
    }
    else {
        printf("No ");
    }

    if (exists_ab == true) {
        printf("Yes ");
    }
    else {
        printf("No ");
    }
    // Please write your code here.
    return 0;
}