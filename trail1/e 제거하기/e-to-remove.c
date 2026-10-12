#include <stdio.h>
#include <string.h>

int main() {

    char A[100];
    scanf("%s", A);

    int len = strlen(A);

    for (int i = 0; i < len; i++) {
        if (A[i] == 'e') {
            for (int j = i; j < len; j++) {
                A[j] = A[j+1];
            }
            break;
        }
    }
    printf("%s", A);
    // Please write your code here.
    return 0;
}