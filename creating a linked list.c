#include<stdio.h>
#include<stdlib.h>
struct node
{
	struct node*next;
	int data;
};
int main()
{
	struct node*head=NULL,*new,*temp;
	int n,i;
	 printf("enter the no of nodes\n ");
	 scanf("%d",&n);
	 for(i=1;i<=n;i++)
	 {
	 	new=(struct node*)malloc(sizeof(struct node));
	 	printf("enter the value \n");
	 	scanf("%d",&new->data);
	 	new->next=NULL;
	 	if(head==NULL)
	 	{
	 		head=new;
			}
			else
			{
				temp=head;
				while(temp->next!=NULL)
				{
					temp=temp->next;
				}
				temp->next=new;
			}
		}
temp=head;
while(temp!=NULL)
{
	printf("%d->",temp->data);
	temp=temp->next;
}
printf(NULL);
return 0;
}
