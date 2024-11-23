#include<stdio.h>
#include <stdlib.h>
#define max 10
int top=-1;
int stack[max];
void push(int value)
{
    if(top==max-1)
        printf("Stack overflow.\n");
    else
    {
        top++;
        stack[top]=value;
    }
}

void pop()
{
    if(top==-1)
        printf("Stack Undererflow.\n");
    else
    {
        top--;
    }
}
void display()
{
    if(top==-1)
        printf("Stack Empty.\n");
    else
    {
        for(int i=0;i<=top;i++)
        {
            printf("%d ",stack[i]);
        }
    }
    printf("\n");
}
int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    display();
    pop();
    display();
}

