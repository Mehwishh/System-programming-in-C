// 2. Write a program in C to print a string in reverse using
pointers.
#include <stdio.h>
#include <string.h>
    int
    main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    char *ptr = &str[strlen(str) - 1];
    for (int i = strlen(str) - 1; i > -1; i--)
    {
        printf("%c", *ptr);
        ptr--;
    }
    return 0;
}