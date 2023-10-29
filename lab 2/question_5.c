#include <stdio.h>
int main()
{// Write a C program to print all unique elements in an array.
    int arr[] = {23, 32, 43, 1, 20, 56, 43, 52, 56}, size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        int count = 0;
        for (int j = 0; j < size; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }
        if (count == 1)
        {
            printf("%d\n", arr[i]);
        }
    }
    return 0;
}