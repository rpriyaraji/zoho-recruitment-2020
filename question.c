#include <stdio.h>

int main()
{
    int rows, cols, i, j;

    
    scanf("%d", &rows); /*Get user input*/
    cols = rows;

    for(i=1; i<=rows; i++)
    {
        for(j=cols; j>cols-i; j--)
        {
            printf("%d", j);
        }

        for(j=1; j<=cols-i; j++)
        {
            printf("%d", (rows - i + 1));
        }

        printf("\n");
    }

    return 0;
}
