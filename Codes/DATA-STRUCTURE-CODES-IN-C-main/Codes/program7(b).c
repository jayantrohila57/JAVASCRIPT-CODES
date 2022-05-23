//PROGRAM #7(B)
//TO SEARCH AN ELEMENT IN THE ARRAY
// USING RECURSIVE BINARY SEARCH.
#include<stdio.h>
#include<conio.h>
void binary(int [],int,int);
void main()
{
    int a[20],i,n,item;
    //clrscr();
    printf("TO SEARCH AN ELEMENT IN THE ARRAY\nUSING RECURSIVE BINARY SEARCH.\n");
    printf("ENTER THE NUMBER OF ITEM IN THE ARRAY=\n");
    scanf("%d",&n);
    printf("ENTER THE NUMBER OF ITEMS IN THE ARRAY=\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("ENTER THE ELEMENT TO BE SEARCHED=\n");
    scanf("%d", &item);
    binary(a,n,item);
getch();
}
void binary(int a[],int n,int item)
{
    int beg,end,mid,loc=-1;
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
    else if(item>a[mid])
        beg=mid+1;
        else
        end=mid-1; 
    }
    if(loc==-1)
    printf("ELEMENT NOT FOUND");
    else
    printf("ELEMENT FOUND AT POSITION=%d",loc);
}



