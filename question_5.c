
// 5. Write a C program to add two matrices using pointers.
#include <stdio.h>
int main()
{
    int row, col;
    printf("How many rows should the matrices have? ");
    scanf("%d", &row);
    printf("How many columns should the matrices have? ");
    scanf("%d", &col);
    int mat1[row][col];
    int *ptr1 = mat1;
    printf("For Matrix 1\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter element %d of row %d: ", j + 1, i + 1);
            scanf("%d", ptr1);
            ptr1++;
        }
    }
    int mat2[row][col];
    int *ptr2 = mat2;
    printf("For Matrix 1\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter element %d of row %d: ", j + 1, i + 1);
            scanf("%d", ptr2);
            ptr2++;
        }
    }
    ptr1 = mat1;
    ptr2 = mat2;
    int mat3[row][col];
    int *ptr3 = mat3;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            *ptr3 = *ptr1 + *ptr2;
            printf("%d ", *ptr3);
            ptr1++;
            ptr2++;
            ptr3++;
        }
        printf("\n");
    }
    return 0;
}