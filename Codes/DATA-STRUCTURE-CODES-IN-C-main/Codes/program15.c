//PROGRAM #15
//TO IMPLEMENT LINKED LIST
#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<process.h>
struct node
{
    int info;
    struct node *next;
};
struct node *start=NULL;

void ins();
void ins_at_beg();
void ins_at_end();
void del();
void del_at_beg();
void del_at_mid();
void del_at_end();
int count();

void main()
{
    int ch=0,i=0,cnt;
    printf("TO IMPLEMENT LINKED LIST\n");
    //clrscr();
    while(1)
    {
        printf("\n*****************MENU***********************");
        printf("1.INSERT,");
        printf("2.DELETE,");
        printf("3.DISPLAY,");
        printf("4.COUNT,");
        printf("5.EXIT");    
        printf("\nENTER YOUR CHOICE\n=");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:ins();
            break;
            case 2:del();
            break;
            case 3:display();
            break;
            case 4:cnt=count();
            printf("\nTHE NO.OF NODES:%d\n",cnt);
            break;
            case 5:exit(1);
        }    
    }
}
void ins()
{
    int j=0,ch1=0;
    printf("\nENTER YOUR CHOICE=");
    printf("1.INSERT AT BEGGNING,");
    printf("2.INSERT AT MIDDLE,");
    printf("3.INSERT AT THE END\n=");
    scanf("%d",&ch1);
    switch(ch1)
    {
        case 1: ins_at_beg();
        break;
        case 2: ins_at_mid();
        break;
        case 3: ins_at_end();
    }
}
void ins_at_beg()
{
    int info;
    struct node *t=(struct node*)malloc(sizeof(struct node));
    printf("\nENTER YOUR INFORMATION OF THE FIRST NODE\n=");
    scanf("%d",&info);
    t->info=info;
    t->next=start;
    start=t;    
}
void ins_at_mid()
{
    int inform,x,i;
    struct node *t=(struct node*)malloc(sizeof(struct node));
    struct node *p=start;
    printf("\nENTER YOUR INFORMATION OF THE NEW NODE\n=");
    scanf("%d",&inform);
    t->info=inform;
    t->next=p->next;
    p->next=t;
}
void ins_at_end()
{
    int inform1;
    struct node *t=(struct node*)malloc(sizeof(struct node));
    struct node *p=start;
    printf("\nENTER INFORMATION TO BE ADDED\n=");
    scanf("%d",&inform1);
    t->info=inform1;
    while(p->next!=NULL)
        p=p->next;
    p->next=t;
    t->next=NULL;
}

void del()
{
    int k=0,ch2=0;
    printf("\nENTER YOUR CHOISE=");
    printf("1.DELETE AT THE BEGGNING,");
    printf("2.DELETE AT THE MIDDLE,");
    printf("3.DELETE AT THE END\n=");
    scanf("%d",&ch2);
    switch(ch2)
    {
        case 1: del_at_beg();
        break;
        case 2:del_at_mid();
        break;
        case 3:del_at_end();
        break;
    }
}
void del_at_beg()
{
    struct node *t=start;
    start=start->next;
    free(t);
}
void del_at_mid()
{
    int n;
    struct node *cur=start;
    struct node *pre=start;
    printf("\nENTER THE INFORMATION TO BE DELETED\n=");
    scanf("%d",&n);
    while(cur->info!=n)
    {
        pre=cur;
        cur=cur->next;
    }
    pre->next=cur->next;
    free(cur);
}
void del_at_end()
{
    struct node *cur=start;
    struct node *pre=start;
    while(cur->next!=NULL)
    {
        pre=cur;
        cur=cur->next;
    }
    pre->next=NULL;
    free(cur);
}
void display()
{
    struct node *p=start;
    printf("\n\n************LINK LIST***********\n\n");
    while(p!=NULL)
    {
        printf("%d",p->info);
        p=p->next;
    }
}
int count()
{
    int c=0;
    struct node *q=start;
    while(q!=NULL)
    {
        q=q->next;
        c=c+1;
    }
    return c;
}



























