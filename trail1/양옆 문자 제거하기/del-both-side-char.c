#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%s", str);

    int len = strlen(str);

    for (int i = 1; i < len; i++) {
        str[i] = str[i + 1];
    }

    len--;

    // 뒤에서 2번째 문자 삭제
    for (int i = len - 2; i < len; i++) {
        str[i] = str[i + 1];
    }

    printf("%s", str);

    return 0;
}