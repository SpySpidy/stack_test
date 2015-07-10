#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int key;
    struct Node *next;
}*top;

void pop()
{
    struct Node *temp, *ptr=top;
    if(ptr==top)
    {
        printf("\nPopped Value :%d\n",top->key);
        top = top->next;
        free(ptr);
    }
    else
    printf("\n Empty");
    return;
}

void push(int value)
{
    struct Node *temp;
    temp=(struct Node *)malloc(sizeof(struct Node));
    temp->key=value;
    if (top == NULL)
    {
         top=temp;
         top->next=NULL;
    }
    else
    {
        temp->next=top;
        top=temp;
    }
}

void display()
{
     struct Node *ptr=top;
     if(ptr!=NULL)
     {
          printf("\nElements are as:\n");
          while(ptr!=NULL)
          {
               printf("\t%d\n",ptr->key);
               ptr=ptr->next;
          }
     printf("\n");
     }
     else
     printf("\n is Empty");
}

int main(int argc, char *argv[])
{
     int i=0;
     top=NULL;
     printf(" \n1. Push to ");
     printf(" \n2. Pop from ");
     printf(" \n3. Display key of ");
     printf(" \n4. Exit\n");
     while(1)
     {
          printf(" \nChoose Option: ");
          scanf("%d",&i);
          switch(i)
          {
               case 1:
               {
               int value;
               printf("\nEnter a value to push into : ");
               scanf("%d",&value);
               push(value);
               break;
               }
               case 2:
               {
               pop();
               break;
               }
               case 3:
               {
               display();
               break;
               }
               case 4:
               {
               exit(0);
               }
               default:
               {
               printf("\nwrong choice for operation");
               }
         }
    }
}
