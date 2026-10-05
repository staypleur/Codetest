#include <stdio.h>
#include <stdbool.h>

int main() {    
    char str[20];
    char c;
    scanf("%s %c", str, &c);

    int num = 0;
    bool exists = false;
    for (int i = 0; i < 20; i++) {
        exists = false;
        if (str[i] == c) {
            num = i;
            break;
        }
        else {
            exists = true;
        }
        
    }

    if (exists == true) {
        printf("No");
    }
    else {
        printf("%d", num);
    }
    
    // Please write your code here.
    return 0;
}