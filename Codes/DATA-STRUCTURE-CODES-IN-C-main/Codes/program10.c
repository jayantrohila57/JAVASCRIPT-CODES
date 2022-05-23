//PROGRAM #10
//TO IMPLEMENT INSTERTION SORT.
#include<stdio.h>
#include<conio.h>
void insert(int[],int);
void main()
{
    int a[20],i,n;
    //clrscr();
    printf("TO IMPLEMENT INSTERTION SORT.\n");
    printf("ENTER THE NO.OF ITEMS IN ARRAY\n");
    scanf("%d",&n);
    printf("ENTER THE DATA IN THE ARRAY\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    insert(a,n);
    getch();
}
void insert(int a[],int n)
{
    int i,j,temp;
    for(i=1;i<n;i++)
    {
        temp=a[i];
        for(i=1;i<n;i++)
        {
            temp=a[i];
            for(j=i-1;j>=0;j--)
            {
                if(a[j]>temp)
                {
                    a[j+1]=a[j];
                }
                else
                break;
            }              
            a[j=1]=temp;
        }
        printf("DATA AFTER INSERTION SORT\n");
        for(i=0;i<n;i++)
        printf("\n%d",a[i]);
    }
}

