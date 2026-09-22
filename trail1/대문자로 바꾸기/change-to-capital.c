#include <stdio.h>

int main() {
    char arr[5][3];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            scanf(" %c", &arr[i][j]);
            
        }
        
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            arr[i][j] += 'A' - 'a';
            printf("%c ", arr[i][j]);
        }
        printf("\n");
    }
    // Please write your code here.
    return 0;
}