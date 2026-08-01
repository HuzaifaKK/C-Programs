#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 6;
    int c = n * (n + 1) / 2;
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
            printf("%d ", c--);
        printf("\n");
    }
    return 0;
}