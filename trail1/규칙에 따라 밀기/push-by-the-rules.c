#include <stdio.h>
#include <string.h>

int main() {
    char str[1001];
    scanf("%s", str);
    int len = strlen(str);

    char A[1001];
    scanf("%s", A);

    int len2 = strlen(A);

    for (int i = 0; i < len2; i++) {
        if (A[i] == 'L') {
            char temp = str[0];
            for (int j = 0; j < len-1; j++) {
                str[j] = str[j+1];
                
            }
            str[len-1] = temp;
        }
        else if (A[i] == 'R') {
            char temp = str[len-1];
            for (int j = len-1; j > 0; j--) {
                str[j] = str[j-1];
                
            }
            str[0] = temp;
        }
    }
    printf("%s", str);
    
    // Please write your code here.
    return 0;
}