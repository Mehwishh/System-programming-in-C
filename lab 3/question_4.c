// 4. Write a C program to search for an element in an array
using pointers.
#include <stdio.h>
    int
    main()
{
    int len, ele;
    printf("Enter the length of array: ");
    scanf("%d", &len);
    int arr[len], *ptr = arr;
    for (int i = 0; i < len; i++)
    {
        printf("Enter element %d of array: ", i + 1);
        scanf("%d", ptr);
        ptr++;
    }
    ptr = arr;
    printf("Which element's index would you like to access");
    scanf("%d", &ele);
    printf("Array elements:\n");
    for (int i = 0; i < len; i++)
    {
        if (*ptr == ele)
        {
 printf("The required element %d is at index %d
address %p", ele, i, ptr);}
 ptr++;
        }
        return 0;
    }