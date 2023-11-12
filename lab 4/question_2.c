// 2. Write a C program to merge two sorted singly linked lists into a single sorted linked list.
#include <stdio.h>
#include <stdlib.h>
    struct Node
{
    int data;
    struct Node *next;
};
struct Node *createNode(int data)
{
    struct Node *newNode = malloc(sizeof(struct Node));
    if (newNode == NULL)
    {
        fprintf(stderr, "Memory allocation failed!");
        exit(0);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
struct Node *insertAfter(struct Node *head, int data, int search)
{
    struct Node *current = head;
    while (current != NULL && current->data != search)
    {
        current = current->next;
    }
    if (current->data == search)
    {
        struct Node *new = createNode(data);
        new->next = current->next;
        current->next = new;
    }
    else
    {
        printf("Node not found!\n");
    }
    return head;
}
struct Node *insertAtTheEnd(struct Node *head, int data)
{
    struct Node *newNode = createNode(data);
    if (head == NULL)
    {
        return newNode;
    }
    struct Node *current = head;
    while (current->next != NULL)
    {
        current = current->next;
    }
    current->next = newNode;
    return head;
}
struct Node *printList(struct Node *head)
{
    struct Node *current = head;
    while (current != NULL)
    {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
    return head;
}
int main()
{
    struct Node *head1 = createNode(1);
    insertAfter(head1, 2, 1);
    insertAfter(head1, 3, 2);
    printList(head1);
    struct Node *head2 = createNode(2);
    insertAfter(head2, 3, 2);
    insertAfter(head2, 4, 3);
    printList(head2);
    struct Node *temp1 = head1;
    struct Node *temp2 = head2;
    struct Node *head3 = NULL;
    int val;
    while (temp1 != NULL && temp2 != NULL)
    {
        if (temp1->data < temp2->data)
        {
            val = temp1->data;
            temp1 = temp1->next;
        }
        else
        {
            val = temp2->data;
            temp2 = temp2->next;
        }
        head3 = insertAtTheEnd(head3, val);
    }
    if (temp1 != NULL)
    {
        head3 = insertAtTheEnd(head3, temp1->data);
        temp1 = temp1->next;
    }
    if (temp2 != NULL)
    {
        head3 = insertAtTheEnd(head3, temp2->data);
        temp2 = temp2->next;
    }
    printList(head3);
    return 0;
}