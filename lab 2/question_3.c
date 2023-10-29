
#include <stdio.h>
int main()
{
    // 3. Write a C program to compare two strings without using string library functions.
   
    char s1[100], s2[100];
    printf("Enter the first string: ");
    scanf("%s", s1);
    printf("Enter the second string: ");
    scanf("%s", s2);

    int i;
    for (i = 0; s1[i] == s2[i] && s1[i] != '\0'; i++);
    if (s1[i] == '\0' && s2[i] == '\0')
    {
        printf("The strings are equal.\n");
    }
    else
    {
        printf(" Strings are not equal");
    }

    return 0;
}