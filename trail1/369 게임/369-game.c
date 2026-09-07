#include <stdio.h>

int main() {
    // 변수 선언
    int n;

    // 입력
    scanf("%d", &n);
    
    // 출력
    for(int i = 1; i <= n; i++) {
        if(i % 3 == 0)
            printf("0 ");
        else if(i % 10 == 3 || i % 10 == 6 || i % 10 == 9)
            printf("0 ");
        else if(i / 10 == 3 || i / 10 == 6 || i / 10 == 9)
            printf("0 ");
        else
            printf("%d ", i);
    }
  
    return 0;
}

