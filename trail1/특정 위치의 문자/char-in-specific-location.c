#include <stdio.h>

int main() {
    char word[6] = {'L', 'E', 'B', 'R', 'O', 'S'};

    char c;
    scanf(" %c", &c);

    int idx = -1;

    for (int i = 0; i < 6; i++) {
        if (word[i] == c) {
            idx = i;
        }
        
    }
    if (idx == -1) {
        printf("None\n");
    }
    else {
        printf("%d\n", idx);
    }

    // Please write your code here.
    return 0;
}