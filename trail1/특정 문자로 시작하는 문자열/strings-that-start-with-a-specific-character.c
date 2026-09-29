#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    char str[n][20];

    for (int i = 0; i < n; i++) {
        scanf("%s", str[i]);
    }

    char ch;
    scanf(" %c", &ch);

    int sum = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (str[i][0] == ch) {
            int len = strlen(str[i]);
            sum += len;
            cnt++;
        }
    }

    printf("%d %.2lf", cnt, (double)sum / cnt);
    // Please write your code here.
    return 0;
}