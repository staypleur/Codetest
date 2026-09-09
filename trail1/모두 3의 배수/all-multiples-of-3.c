#include <stdio.h>
#include <stdbool.h>

int main() {
    bool sat = true;
    for(int i = 0; i <= 5; i++) {{
        int a;
        scanf("%d", &a);
        if (a % 3 != 0) {
            sat = false;
        }
    }}

    if (sat == true) {
        printf("1");
    }
    else {
        printf("0");
    }
    // Please write your code here.
    return 0;
}