#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    
    int num[n];
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
        if (num[i] == m) {
            cnt++;
        }    
        
    }
    printf("%d", cnt);
    // Please write your code here.
    return 0;
}