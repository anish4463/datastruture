#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 10
int queue[max],front=-1,rear=-1;
void insert();
void delete();
void peek();
void display();
int main()
{
int option;
 printf("\t\t\t\tQUEUES\t\t\t\n");
do
{
  printf("1:INSERT THE ELEMENT");
  printf("\n2:DELETE THE ELEMENT");
  printf("\n3:PEEK THE ELEMENT");
  printf("\n4:DISPLAY THE ELEMENTS");
  printf("\n5:EXIT");
  printf("\nENTER THE OPTION:");
  scanf("%d",&option);
  switch(option)
  {
   case 1: insert();
   break;
   case 2: delete();
   break;
   case 3: peek();
   break;
   case 4: display();
   break;
   case 5:
   break;
   default: printf("INVALID CHOICE");
   break;
   }
   }
   while(option!=5);
   return 0;
   }
     void insert()
     {
     int num;
     if(front==0&&rear==max-1)
     {
      printf("QUEUE IS FULL!!!");
     }
     else
     {
     printf("ENTER THE ELEMENT:");
     scanf("%d",&num);
     if(front==-1&&rear==-1)
     {
     front=rear=0;
     queue[rear]=num;
     }
     else
     if(front!=0&&rear==max-1)
     {
     rear=0;
     queue[rear]=num;
     }
     else
     {
     rear++;
     queue[rear]=num;
     }}
     }
     void delete()
     {
     if(front==-1&&rear==-1)
     {
     printf("QUEUE IS EMMPTY");
     }
     else
     {
     printf("THE DELETED ELEMENTIS %d",queue[front]);
     if(front==rear)
     {
     front=rear=-1;
     }
     else if(front==max-1)
     {
     front=0;
     }
     else
     {
     front++;
     }
     }
     }
      void peek()
      {
       if(front==-1&&rear==-1)
       {
       printf("QUEUE IS EMPTY");
       }
       else
       {
       printf("THE FIRST ELEMENT IS%d",queue[front]);
       }
       }
       void display()
       {
       int i;
       if(front==-1&&rear==-1)
       {
       printf("QUEUE IS EMPTY");
       }
       else
       {
	printf("\n THE ELEMENT IN THE QUEUE ARE:");
	if(front<rear)
	{
	for(i=front;i<rear;i++)
	{
	printf("%d\t->\t",queue[i]);
	}
	}
	else if(front>rear)
	{
	for(i=front;i<max;i++)
	{
	printf("%d\t->\t",queue[i]);
	}
	for(i=0;i<=rear;i++)
	{
	printf("%d\t->\t",queue[i]);
	}
	}
	else
	{
      printf("%d\t->",queue[front]);
      }
      }
      }

