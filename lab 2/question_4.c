
#include <stdio.h>
int main()
{
    char s1[100];
// Write a C program to read a sentence and replace lowercase characters with uppercase and vice versa.

    printf("Enter a sentence: ");
    scanf("%[^\n]s", &s1);
    int i;
    for (i = 0; s1[i] != '\0'; i++)
    {
        if (s1[i] >= 65 && s1[i] <= 90)
        {
            s1[i] += 32;
            printf("%c", s1[i]);
        }
        else if (s1[i] >= 97 && s1[i] <= 122)
        {
            s1[i] -= 32;
            printf("%c", s1[i]);
        }
        else
            printf("%c", s1[i]);
    }
    return 0;
}