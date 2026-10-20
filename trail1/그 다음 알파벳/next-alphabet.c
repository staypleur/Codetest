#include <stdio.h>

int main() {
    char ch;
    scanf(" %c", &ch);

    if(ch == 'z') {
        printf("a");
    }
    else {
        printf("%c", ch+1);
    }

    // Please write your code here.
    return 0;
}