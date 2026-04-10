#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *head = NULL, *temp, *newnode;
    int n, i, value, insert_value, position;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    
    for(i = 0; i < n; i++)
    {
        newnode = (struct node*)malloc(sizeof(struct node));

        printf("Enter value for node %d: ", i+1);
        scanf("%d", &value);

        newnode->data = value;
        newnode->next = NULL;

        if(head == NULL)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
    }
    printf("Enter position to insert (starting from 1): ");
    scanf("%d", &position);

    printf("Enter value to insert: ");
    scanf("%d", &insert_value);

    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = insert_value;
    newnode->next = NULL;
    
    
    if(position == 1)
    {
        newnode->next = head;
        head = newnode;
    }
    else
    {
        temp = head;
        for(i = 1; i < position - 1 && temp != NULL; i++)
        {
            temp = temp->next;
        }

        if(temp == NULL)
        {
            printf("Invalid Position!\n");
        }
        else
        {
            newnode->next = temp->next;
            temp->next = newnode;
        }
    }
    printf("Linked List after insertion:\n");
    temp = head;
    while(temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL");

    return 0;
}

