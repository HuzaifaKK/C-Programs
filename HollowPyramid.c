#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 7;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j == 1 || j == i || i == n)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}