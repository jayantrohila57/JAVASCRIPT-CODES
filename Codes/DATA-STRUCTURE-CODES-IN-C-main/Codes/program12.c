//PROGRAM #12
//TO IMPLEMENT MERGE SORT.
#include<stdio.h>
#include<conio.h>
void mergesort(int a[],int,int);
void merge(int[],int,int,int);
void main()
{
    int a[20],i,n;
    //clrscr();
    printf("TO IMPLEMENT MERGE SORT.\n");
    printf("ENTER THE NUMBER OF ELEMENTS=\n");
    scanf("%d",&n);
    printf("ENTER THE ELEMENTS=\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    mergesort(a,0,n-1);
    printf("DATA AFTER MERGE SORT=\n");
    for(i=0;i<n;i++)
    printf("\n%d",a[i]);
    getch();
}
void mergesort(int a[],int lb,int ub)
{
    int mid;
    if(lb<ub)
    {
        mid=(lb+ub)/2;
        mergesort(a,lb,mid);
        mergesort(a,mid+1,ub);
        merge(a,lb,mid+1,ub);
    }
}

void merge(int a[],int lb,int mid, int ub)
{
    int k,p1,p2,p3,b[20];
    p1=lb;
    p3=lb;
    p2=mid;
    while((p1<mid)&&(p2<=ub))
    {
        if(a[p1]<=a[p2])
        b[p3++]=a[p2++];
        else
        b[p3++]=a[p2++];
    }
    while(p1<mid)
    {
        b[p3++]=a[p1++];
    }
    while(p2<ub)
    {
        b[p3++]=a[p2++];
    }
    for(k-lb;k<p3;k++)
    {
        a[k]=b[k];
    }
}














