#include <stdio.h>

int main() {
    char str[20];

    scanf("%s", str);

    int num_ee = 0;
    int num_eb = 0;
    for (int i = 0; i < 20; i++) {
        if (str[i] == 'e' && str[i+1] == 'e') {
            num_ee++;
        }
        if (str[i] == 'e' && str[i+1] == 'b') {
            num_eb++;
        }
    }

    printf("%d %d", num_ee, num_eb);
    // Please write your code here.
    return 0;
}