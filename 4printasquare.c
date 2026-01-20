#include <stdio.h>
int main() {
    int n;
    printf("size of square: ");
    scanf("%d", &n);
    for(int i = 1; i <= n * n; i++) {
        printf("*");
        if(i % n == 0)
            printf("\n");
    }
    return 0;
}
