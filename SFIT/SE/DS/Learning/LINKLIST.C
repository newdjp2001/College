#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

typedef struct node
{
	int data;
	struct node *next;
}node;

void display(node*);
node * insert_beg(node *);
//node * insert_end(node *);

int main()
{
	struct node * start=NULL;
	int ch;
	clrscr();
	while(1)
	{
		printf("\nMenu:\n1.Insert_beg\n2.Insert_end\n3.Display\n4.Exit");
		printf("\nEnter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: start=insert_beg(start);
				break;
		      //	case 2: start=insert_end(start);
			//	break;
			case 3: display(start);
				break;
			case 4: exit(0);
			default : printf("You entered wrong choice");
		}
	}
}

void display (node* start)
{
	node * ptr;
	ptr=start;
	if(ptr==NULL)
	{
		printf("Empty list");
	}
	else
	{
		printf("\nElements of the list:\n");
		while(ptr!=NULL)
		{
			printf("%d\n",ptr->data);
			ptr=ptr->next;
		}
	}
}

node * insert_beg(node * start)
{
	node *newnode=malloc(sizeof(node));
	printf("Enter data : ");
	scanf("%d",&newnode->data);
	newnode->next=start;
	start=newnode;
	return start;
}
