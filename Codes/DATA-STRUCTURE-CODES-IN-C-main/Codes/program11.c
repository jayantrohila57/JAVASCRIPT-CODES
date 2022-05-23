//PROGRAM #11
//TO IMPLEMENT QUICK SORT
#include<stdio.h>
#include<conio.h>
void quicksort(int[],int,int);
int partition(int[],int,int);
void main()
{
    int a[20],i,n;
    //clrscr();
    printf("TO IMPLEMENT QUICK SORT.\n");
    printf("ENTER THE SIZE OF ARRAY=\n");
    scanf("%d",&n);
    printf("ENTER THE ELEMENTS IN THE ARRAY=\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    quicksort(a,0,n-1);
    for(i=0;i<n;i++)
    printf("\n%d",a[i]);
    getch();
}
void quicksort(int a[],int lb,int ub)
{
    int mid;
    if(lb<ub)
    {
        mid=partition(a,lb,ub);
        quicksort(a,lb,mid-1);
        quicksort(a,mid+1,ub);
    }
}
int partition(int a[],int lb,int ub)
{
    int i,p,q,t;
    p=lb+1;
    q=ub;
    i=a[lb];
    while(q>=p)
    {
        while(a[p]<i)
        p++;
        while(a[q]>i)
        q--;
        if(q>p)
        {
            t=a[p];
            a[p]=a[q];
            a[q]=t;
        }
    }
    t=a[lb];
    a[lb]=a[q];
    a[q]=t;
    return q;
}


