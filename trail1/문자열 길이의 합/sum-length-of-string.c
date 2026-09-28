#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    char str[n][100];

    int sum = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        scanf("%s", str[i]);
        sum += strlen(str[i]);

        if (str[i][0] == 'a') {
            cnt++;
        }
    }

    printf("%d %d", sum, cnt);
    // Please write your code here.
    return 0;
}