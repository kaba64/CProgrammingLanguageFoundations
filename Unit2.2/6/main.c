//Your program will have to read a sequence of positive integers and display their sum. We do not know how many integers
// there will be, but the sequence always ends with the value -1 (which is not an expense, just an end marker).
#include <stdio.h>
int main(void)
{
    int expenses=0;
    int sum=0;
    scanf("%d", &expenses);
    while (expenses != -1)
    {
        sum = sum + expenses;
        scanf("%d", &expenses);
    }
    printf("%d\n", sum);
    return 0;
}
