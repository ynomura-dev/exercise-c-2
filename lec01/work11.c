#include <stdio.h>

int main(void) {
    int n, m;
    scanf("%d", &n);
    if (n < 0) return 1;
    while (1) {
        scanf("%d", &m);
        if (m < 0){
            printf("%d\n", n);
            break;
            }
        n += m;
    }
}
