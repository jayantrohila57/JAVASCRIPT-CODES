//PROGRAM #13
//TO IMPLEMENT STACK USING ARRAY
#include<stdio.h>
#include<conio.h>
#include<process.h>
void push();
void pop();
void display();
int top;
int a[5];
void main()
{
    int choice;
    char ch;
    top=-1;
    printf("TO IMPLEMENT STACK USING ARRAY\n");
    //clrscr();
    do
    {
        printf("\n\t1.PUSH");
        printf("\n\t2.POP");
        printf("\n\t3.DISPLAY");
        printf("\n\t4.EXIT");
        printf("\nENTER YOUR CHOISE=\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            push();
            break;
            case 2:
            pop();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(0);
            default:
            printf("\nBAD CHOICE");
        }
        printf("\nDO YOU WANT TO CONTINUE y/n");
        ch=getche();
    }
    while(ch=='y');
}
void push()
{
    int item;
    if(top==4)
    printf("STACK IS FULL");
    else
    {
        printf("ENTER THE ITEM TO BE INSERTED\n");
        scanf("%d",&item);
        top=top+1;
        a[top]=item;
        //top=tope;
    }
}
void pop()
{
    int item;
    if(top==-1)
    printf("STACK IS EMPTY\n");
    else
    {
        item=a[top];
        top=top-1;
        printf("%d IS DELETED\n",item);
        //top=tope;
    }
}
void display()
{
    int i;
    for(i=top;i>=0;i--)
    printf("\n%d",a[i]);
}








    









