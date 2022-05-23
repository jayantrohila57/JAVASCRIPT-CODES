//PROGRAM #7(A)
//TO SEARCH AN ELEMENT IN THE ARRAY
// USING ITERATIVE BINARY SEARCH.
#include<stdio.h>
#include<conio.h>
void main()
{
    int a[20],n,mid,beg,i,end,item,loc=-1;
    //clrscr();
	printf("TO SEARCH AN ELEMENT IN THE ARRAY\nUSING ITERATIVE BINARY SEARCH.\n");
    printf("ENTER THE NUMBER OF ELEMENT TO BE ENTERED=\n");
    scanf("%d",&n);
    printf("ENTER THE ELEMENT IN ASSENDING ORDER=\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("ENTER THE ELEMENT TO BE SEARCHED=\n");
    scanf("%d",&item);
    beg=0;
    end=n-1;
    while(beg<=end)
    {
        mid=(beg+end)/2;
        if(item==a[mid])
        {
            loc=mid;
            break;
        }
    
    else if (a[mid]<item)
    beg=mid=1;
    end=mid-1;
    }
    if(loc==-1)
    printf("ELEMENT FOUND AT=%d",loc);
    else
    printf("ELEMENT FOUND AT =%d",loc);
    getch();
}
