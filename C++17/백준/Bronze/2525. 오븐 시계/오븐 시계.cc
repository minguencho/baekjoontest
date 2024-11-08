#include <stdio.h>

int main() {
    int h, m, pm;
    scanf("%d %d", &h, &m);
    scanf("%d", &pm);
    m += pm;
    h += m / 60;
    m %= 60;
    h %= 24;
    printf("%d %d\n", h, m);  // 결과 출력
    return 0;
}