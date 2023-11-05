
// 3. Write a C program to input and print array elements
using pointers.
#include <stdio.h>
#include <string.h>
    int
    main()
{
    int len;
    printf("Enter the length of array: ");
    scanf("%d", &len);
    int arr[len];
    int *ptr = arr;
    for (int i = 0; i < len; i++)
    {
        printf("Enter element %d of array: ", i + 1);
        scanf("%d", ptr);
        ptr++;
    }
    ptr = arr;
    printf("Array elements:\n");
    for (int i = 0; i < len; i++)
    {
        printf("%d\n", *ptr);
        ptr++;
    }
    return 0;
}