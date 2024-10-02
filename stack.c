#include<stdio.h>
#include<conio.h>  
#include <stdlib.h>                 //stack using array
#define MAXSIZE 10
int stack[MAXSIZE],top=-1;
main()
{
  int choice;
  do
  {
  printf("\n---------------stack menu----------------");
  printf("\n 1.push \n 2.pop \n 3.display \n 4.exit");
  printf("\n-----------------------------------------");
  printf("\nenter your choice :");
  scanf("%d",&choice);
  switch(choice)
  {
  case 1:push();break;
  case 2:pop();break;
  case 3:display();break;
  }
  }while(choice!=4);
  }
 int push()
  {
    int n;
    if(top==MAXSIZE-1)
    printf("\nstack is overflow");
    else
    {
    printf("\nenter an element :");
    scanf("%d",&n);
    top++;
    stack[top]=n;
    }
 }
 int pop()
  {
    int n;
    if(top==-1)
    printf("\nstack is empty");
    else
    {
     n=stack[top];
     top--;
     printf("\npop element is %d",n);
     }
  }
  int display()
  {
    int i;
    if(top==-1)
    printf("\nstack is empty");
    else
    {
     printf("\nelemnts of stack");
     for(i=top;i>=0;i--)
     printf("\n%d",stack[i]);
  }
  }
  