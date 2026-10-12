#include <stdio.h>
#include <string.h>

int main() {
    char a[1000];
    char b[1000];

    scanf("%s %s", a, b);

    int lenA = strlen(a);
    int lenB = strlen(b);

    while (1) {
        int pos = -1;
        
        for (int i = 0; i <= lenA - lenB; i++) {
            int check = 1;

            for (int j = 0; j < lenB; j++) {
                if (a[i + j] != b[j]) {
                    check = 0;
                    break;
                }
            }

            if (check == 1) {
                pos = i;
                break;
            }
        }

        
        if (pos == -1) {
            break;
        }

        
        for (int i = pos; i <= lenA - lenB; i++) {
            a[i] = a[i + lenB];
        }

        lenA -= lenB;
    }

    printf("%s", a);

    return 0;
}