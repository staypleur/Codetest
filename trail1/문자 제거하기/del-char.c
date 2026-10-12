#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int idx;

    scanf("%s", str);

    int len = strlen(str);

    while (len > 1) {
        scanf("%d", &idx);

        
        if (idx >= len) {
            idx = len - 1;
        }

        // idx 위치부터 한 칸씩 앞으로 당기기
        for (int i = idx; i < len; i++) {
            str[i] = str[i + 1];
        }

        len--;

        printf("%s\n", str);
    }

    return 0;
}