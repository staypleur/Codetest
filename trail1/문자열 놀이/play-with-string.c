#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int Q;
    scanf("%s %d", str, &Q);
    int len = strlen(str);

    for (int i = 0; i < Q; i++) {
        int n;
        scanf("%d", &n);
        if (n == 1) {
            int a ,b;
            scanf("%d %d", &a, &b);

            int temp;
            temp = str[a-1];
            str[a-1] = str[b-1];
            str[b-1] = temp;
            printf("%s\n", str);
        }
        if (n == 2) {
            char ch1, ch2;
            scanf(" %c %c", &ch1, &ch2);
            for (int j = 0; j < len; j++) {
                if (str[j] == ch1) {
                    str[j] = ch2;
                }

            }
            printf("%s\n", str);

        }
    }
    // Please write your code here.
    return 0;
}