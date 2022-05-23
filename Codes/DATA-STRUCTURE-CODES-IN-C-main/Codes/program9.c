//PROGRAM #9
//TO IMPLEMENT SELECTION SORT.
#include<stdio.h>
#include<conio.h>
void select(int[],int);
void bubble(int[],int);
int min(int[],int,int);
void main()
{
    int a[20],i,n;
    //clrscr();
    printf("TO IMPLEMENT SELECTION SORT.\n");
    printf("ENTER THE NUMBER OF ITEMS IN THE ARRAY\n");
    scanf("%d",&n);
    printf("ENTER THE DATA IN THE ARRAY=\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    bubble(a,n);
    select(a,n);
    getch();
}
void bubble(int a[],int n)
{
    int i,temp,p;
    for(i=1;i<n;i++)
    {
        for(p=0;p<n-i;p++)
        {
            if(a[p]>a[p+1])
            {
                temp=a[p];
                a[p]=a[p+1];
                a[p+1]=temp;
            }
        }
    }
    printf("\nDATA AFTER BUBBLE SORT\n");
    for(i=0;i<n;i++)
    printf("\n%d",a[i]);
}
void select(int a[],int n)
{
    int i,loc,temp;
    loc=0;
    temp=0;
    for(i=0;i<n;i++)
    {
        loc=min(a,i,n);
        temp=a[loc];
        a[loc]=a[i];
        a[i]=temp;
    }
    printf("\nDATA AFTER SELECTION SORT\n");
    for(i=0;i<n;i++)
    printf("\n%d",a[i]);
}
int min(int a[],int lb,int ub)
{
    int m=lb;
    while(lb<ub)
    {
        if(a[lb]<a[m])
        {
            m=lb;
        }
    	lb++;
    }
    return m;
}
