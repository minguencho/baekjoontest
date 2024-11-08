#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);  // 주사위 세 개의 눈 입력 받기
    for (int i = 1; i < 10; i++) {
        printf("%d * %d = %d\n", a, i, a * i);
    }
    return 0;
}