// 1. Write a program in C to swap elements using call by
reference.
#include <stdio.h>
    void
    swap(int *n1, int *n2);
int main()
{
    int a, b;
    printf("Enter number 1: ");
    scanf("%d", &a);
    printf("Enter number 2: ");
    scanf("%d", &b);
    swap(&a, &b);
    printf("Number 1: %d\n", a);
    printf("Number 2: %d\n", b);
    return 0;
}
void swap(int *n1, int *n2)
{
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}
