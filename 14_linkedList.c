#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    int el1, el2, el3, el4, el5;
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    struct Node *fifth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
    fifth = (struct Node *)malloc(sizeof(struct Node));

    printf("Enter the element 1: ");
    scanf("%d", &el1);
    head->data = el1;
    head->next = second;

    printf("Enter the element 2: ");
    scanf("%d", &el2);
    second->data = el2;
    second->next = third;

    printf("Enter the element 3: ");
    scanf("%d", &el3);
    third->data = el3;
    third->next = fourth;

    printf("Enter the element 4: ");
    scanf("%d", &el4);
    fourth->data = el4;
    fourth->next = fifth;

    printf("Enter the element 5: ");
    scanf("%d", &el5);
    fifth->data = el5;
    fifth->next = NULL;

    linkedListTraversal(head);
    return 0;
}