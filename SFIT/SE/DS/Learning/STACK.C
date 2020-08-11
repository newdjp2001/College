#include<stdlib.h>
#include<stdio.h>
#define size 5
int stack[size];
int top=-1;
void push(int val)
{
	if(top==size-1)
		printf("\nStack Full!!\n");
	else
	{
		top++;
		stack[top]=val;
	}
}
void display()
{	int i;
	if(top==-1)
		printf("\nStack Empty!!\n");
	else
	{	printf("\nStack elements:\n");
		for(i=top;i>=0;i--)
				printf("%d\n",stack[i]);
		
	}
}

void main()
{	
	int choice;int val;
	 clrscr();
	while(1)
	{
	printf("\n1. Push  2. Display  3. Exit\n Enter your  choice:");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:printf("Enter value: ");
				   scanf("%d",&val);
				   push(val);
           break;
		case 2: display();
            break;
		case 3: exit(0);
		default: printf("Enter valid choice!!\n");
		
	}
         getch(); 
	}
	
}
