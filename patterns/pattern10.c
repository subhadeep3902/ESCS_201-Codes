#include <stdio.h>
void pattern(int);
void pattern(int n)
{
        int i, j;
        printf("\nRequired pattern upto %d rows: \n", n);
        for (i = 1; i <= n; i++)
        {
                for (j = 1; j <= i; j++)
                        printf("%d ", i);
                printf("\n");
        }
}
void main()
{
        int rows;
        printf("\nEnter the number of rows: ");
        scanf("%d", &rows);
        pattern(rows);
}