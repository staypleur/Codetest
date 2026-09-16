#include <stdio.h>

int main() {
    char a[10];
    for (int i = 0; i < 10; i++) {
        scanf(" %c", &a[i]);
        
    }
    printf("%c ", a[1]);
    printf("%c ", a[4]);
    printf("%c ", a[7]);

    // Please write your code here.
    return 0;
}