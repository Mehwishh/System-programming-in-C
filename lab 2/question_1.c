#include <stdio.h>
int main()
{ // 1.  Write a C program to display the first n odd natural numbers and their sum using for,                                                                                                 while  and do-while loop.
    printf("Using a for loop:\n");
    int i, n, sum = 0;
    printf("Entre number to print n odd numbers: ");
    scanf("%d", &n);
    for (i = 1; i <= 2 * n; i += 2)
    {
        sum += i;
    }
    printf("\nSum of the first %d odd numbers: %d\n", n, sum);

    printf("Using a While loop:\n");
    int i = 1, sum = 0, n;
    printf("Entre number to print n odd numbers: ");
    scanf("%d", &n);
    while (i <= 2 * n)
    {
        sum += i;
        i += 2;
    }
    printf("\nSum of the first %d odd numbers: %d\n", n, sum);

    int n, i = 1;
    int sum = 0;
    printf("\nUsing a do-while loop:\n");
    printf("Entre number to print n odd numbers: ");
    scanf("%d", &n);
    do
    {
        sum += i;
        i += 2;
    } while (i <= 2 * n);
    printf("\nSum of the first %d odd numbers: %d\n", n, sum);

    return 0;
}
