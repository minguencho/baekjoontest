#include <stdio.h>

int main() {
    int x,n,a,b,total=0;
    scanf("%d", &x);
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &a, &b);
        total += a * b;
    }
    if (x == total) {
        printf("Yes");
    }
    else {
        printf("No");
    }
    return 0;
}