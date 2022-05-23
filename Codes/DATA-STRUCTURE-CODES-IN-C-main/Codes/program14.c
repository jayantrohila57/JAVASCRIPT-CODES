//PROGRAM #14
//TO IMPLEMENT QUEUE USING ARRAY
#include<stdio.h>
#include<conio.h>
#include<process.h>

void insert();
void delet();
void display();
int front,rear;
int q[5];

void main()
{
    int choice;
    char ch;
    front=-1;
    rear=-1;
    printf("TO IMPLEMENT QUEUE USING ARRAY\n");
    //clrscr();
    do
    {
    	printf("\nENTER YOUR CHOICE=");
        printf("1.INSERT,");
        printf("2.DELETE,");
        printf("3.DISPLAY,");
        printf("4.EXIT,\n=");
        
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            insert();
            break;
            case 2:
            delet();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(0);
            default:
            printf("BAD CHOISE!");
        }
            
        printf("\nDO YOU WANT TO CONTINUE y/n=");
        ch=getche();
    }
    while(ch=='y'||'Y');   
}
void insert()
{
    int item;
    if(((front==1)&&(rear==5))||(front==rear+1))
    {
        printf("QUEUE IS FULL!\n");
    }
    else
    {
        printf("ENTER THE ELEMENT\n");
        scanf("%d",&item);
        if (front==-1)
        {
            front=1;
            rear=1;
        }
        else if(rear==5)
        {
            rear=0;
        }       
        else
        {
            rear=rear+1;
        }
        q[rear]=item;
    }
}
void delet()
{
    int item;
    if(front==-1)
    {
        printf("QUEUE IS EMPTY\n");
    }
    else
    {
        item=q[front];
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else if(front==5)
        {
            front=0;
        }
        else
        front=front+1;
        printf("%d IS DELETED\n",item);
    }
}
void display()
{
    int i;
    if(front==-1)
    printf("QUEUE IS EMPTY\n");
    else
    {
        for(i=front;i<rear;i++)
        {
            printf("\n%d",q[i]);
        }
    }
}



