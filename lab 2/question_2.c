#include <stdio.h>

int main()
{
    // 2. Write a C program to make the following pattern as a pyramid with an asterisk.int rows, x, y, space;
    
    printf("Enter the number of rows for the pyramid: ");
    scanf("%d", &rows);
    for (x = 1; x <= rows; x++)
    {
        for (space = 1; space <= rows - x; space++)
        {
            printf(" ");
        }
        for (y = 1; y <= 2 * x - 1; y++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
