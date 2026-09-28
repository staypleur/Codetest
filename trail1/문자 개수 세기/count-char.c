#include <stdio.h>

int main() {
    char str[100];
    fgets(str, 100, stdin);

    char a;
    scanf("%c", &a);

    int cnt = 0;
    for (int i = 0; i < 100; i++) {
        if (str[i] == a) {
            cnt++;
        }
        
    }
    printf("%d", cnt);
    // Please write your code here.
    return 0;
}