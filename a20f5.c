#include <stdio.h>

#define N 5

int main()
{
    int a[N];
    int i, last;

    for (i = 0; i < N; i++) {
        printf("Enter number: ");
        scanf("%d", &a[i]);
    }

    last = a[N - 1];
    for (i = N - 1; i > 0; i--) {
        a[i] = a[i - 1];
    }
    a[0] = last;

    for (i = 0; i < N; i++) {
        if (i > 0) {
            printf(" ");
        }
        printf("%d", a[i]);
    }
    printf("\n");

    return 0;
}
