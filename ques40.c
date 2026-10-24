#include <stdio.h>

int main()
{
    int n = 5;

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < 2 * (n - i) - 1; j++)
            printf(" ");

        for (int k = 0; k < 2 * i + 1; k++)
        {
            if (k == 0 || k == 2 * i || i == n - 1)
                printf("%c ",'A'+k);
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}