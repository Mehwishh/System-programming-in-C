// 1. Write a program that simulates a simple address book. Define a structure to store contact
// information (name, email, phone number). Allow the user to add new contacts to the
// address book dynamically. Use dynamic memory allocation for storing the contacts using
// malloc and update the memory allocation using realloc when adding new contacts.
// Implement an option to delete a contact and free the memory. Ensure that memory is
// properly managed throughout the program's execution.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Contacts
{
    char name[100];
    char email[100];
    char phone_num[12];
};
int main()
{
    struct Contacts *cont = malloc(1 * sizeof(struct Contacts));
    int i = 0, choice;
    // char del_name[100];
    int del_num;
    int j;
    while (1)
    {
        printf("\n");
        printf("What would you like to do?\n1. Add a contact\n2. Delete a contact\n3. Print contacts\n4. Delete Address Book\n");
        scanf("%d", &choice);
        printf("\n");
        switch (choice)
        {
        case 1:

            printf("Enter the name of the contact: ");
            scanf("%s", cont[i].name);
            printf("Enter the email of the contact: ");
            scanf("%s", cont[i].email);
            printf("Enter the phone number of the contact: ");
            scanf("%s", cont[i].phone_num);
            i++;
            cont = realloc(cont, sizeof(struct Contacts) * (i));
            break;

        case 2:
            printf("\nEnter the serial number of the contact you would like delete: ");
            printf("\n");
            for (int j = 0; j < i; j++)
            {
                printf("%d. %s %s %s\n", j + 1, cont[j].name,
                       cont[j].email, cont[j].phone_num);
            }
            scanf("%d", &del_num);
            printf("\n");
            for (j = del_num - 1; j < i - 1; j++)
            {
                cont[j] = cont[j + 1];
            }
            i--;
            break;
        case 3:
            for (int j = 0; j < i; j++)
            {
                printf("%s %s %s\n", cont[j].name,
                       cont[j].email, cont[j].phone_num);
            }
            break;
        case 4:
            free(cont);
            return 0;
        default:
            printf("Enter a valid option!");
        }
    }
}