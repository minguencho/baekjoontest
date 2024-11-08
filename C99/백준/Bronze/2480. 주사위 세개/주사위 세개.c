#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);  // 주사위 세 개의 눈 입력 받기

    if (a == b && b == c) {
        // 세 개의 눈이 같으면
        printf("%d\n", 10000 + a * 1000);
    }
    else if (a == b || b == c || a == c) {
        // 두 개의 눈이 같으면
        if (a == b) {
            printf("%d\n", 1000 + a * 100);
        }
        else if (b == c) {
            printf("%d\n", 1000 + b * 100);
        }
        else {
            printf("%d\n", 1000 + c * 100);
        }
    }
    else {
        // 세 개의 눈이 모두 다르면
        int max_value = a > b ? (a > c ? a : c) : (b > c ? b : c);  // 가장 큰 눈 구하기
        printf("%d\n", max_value * 100);
    }

    return 0;
}