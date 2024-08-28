#include <stdio.h>

int main()
{
    int n = 3;
    int i;
    // scanf("%d", &n);

    // Create the upper part of the rhombus
    n = n + 1;
    for (int i = 0; i < n; i++)
    {
        // Print leading spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            printf("  ");
        }

        // Print digits in ascending order
        for (int j = 0; j <= i; j++)
        {
            printf("%d", j);
            if (j < i)
            {
                printf(" ");
            }
        }
    }

    // Print digits in descending order
    for (int j = i - 1; j >= 0; j--)
    {
        printf(" %d", j);
    }

    // Move to the next line
    printf("\n");
    // Create the lower part of the rhombus
    for (int i = n - 2; i >= 0; i--)
    {
        // Print leading spaces
        for (int j = 0; j < n - i - 1; j++)
        {
            printf("  ");
        }

        // Print digits in ascending order
        for (int j = 0; j <= i; j++)
        {
            printf("%d", j);
            if (j < i)
            {
                printf(" ");
            }
        }

        // Print digits in descending order
        for (int j = i - 1; j >= 0; j--)
        {
            printf(" %d", j);
        }

        // Move to the next line
        printf("\n");
    }
}