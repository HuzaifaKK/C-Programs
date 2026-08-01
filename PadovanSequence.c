#include <stdio.h>

int Padovan(int n);

int main()
{
    int n = 17; // Term
    printf("The %dth Padovan number is: %d\n", n, Padovan(n));
    return 0;
}

int Padovan(int n)
{
    if (n == 0 || n == 1 || n == 2)
    {
        return 1;
    }
    return Padovan(n - 2) + Padovan(n - 3);
}
