#include <stdio.h>
int main(void)
{
    int number_star = 0;
    int row;
    int column;
    scanf("%d", &number_star);
    for (row = 0; row<number_star; row++)
    {
        for (column = 0; column<number_star; column++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
