//PROGRAM #8
//TO IMPLEMENT BUBBLE SORT
#include<stdio.h>
#include<conio.h>
void bubble(int[],int);
void main()
{
    int a[20],i,n;
    //clrscr();
    printf("TO IMPLEMENT BUBBLE SORT\n");
	printf("ENTER THE NUMBER OF ARRAY=\n");
    scanf("%d",&n);
    printf("\nENTER THE DATA IN THE ARRAY=\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    bubble(a,n);
    getch();
}
void bubble(int a[],int n)
{
    int i,temp,j,p;
    for(i=1;i<n;i++)
    {
        for(p=0;p<0;p++)
        {
            if(a[p]>a[p+1])
            {
                temp=a[p];
                a[p]=a[p+1];
                a[p+1]=temp;
            }
        }
    }
for(i=0;i<n;i++)
printf("\n%d",a[i]);
}


