#include <stdio.h>
#include <string.h>

int main() {
    char ch[1000];
    scanf("%s", ch);
    

    int len = strlen(ch);
    int cnt = 1;
    int result = 0;

    for (int i = 1; i <= len; i++) {
        if (i < len && ch[i] == ch[i-1]) {
            cnt++;
        }
        else {
            result++;
            int temp = cnt;

            while (temp > 0) {
                result++;
                temp /= 10;
            }

            cnt = 1;
        }
    }

    printf("%d\n", result);

    cnt = 1;

    for (int i = 1; i <= len; i++) {
        if (i < len && ch[i] == ch[i-1]) {
            cnt++;
        }
        else {
            printf("%c%d", ch[i-1], cnt);
            cnt = 1;
        }
    }
    // Please write your code here.
    return 0;
}