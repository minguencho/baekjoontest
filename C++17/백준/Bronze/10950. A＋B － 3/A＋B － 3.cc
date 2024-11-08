#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d", &a);  // 주사위 세 개의 눈 입력 받기
    for (int i = 0; i < a; i++) {
        scanf("%d %d", &b, &c);
        printf("%d\n",b+c);
    }
    return 0;
}