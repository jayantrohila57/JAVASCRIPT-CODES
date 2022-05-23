//PROGRAM #5
//TO PRERFORM THE SWAPPING OF TWO NUMBERS 
//USING CALL BY VALUEAND CALL BY REFERENCE
#include<stdio.h>
#include<conio.h>
void swapbyvalue(int,int);
void swapbyref(int*,int*);
void main()
{
    int a,b;
    //clrsce();
    printf("TO PRERFORM THE SWAPPING OF TWO NUMBERS \nUSING CALL BY VALUEAND CALL BY REFERENCE\n");
    printf("ENTER THE TWO NUMBERS\n=");
    scanf("%d%d",&a,&b);
    swapbyvalue(a,b);
    swapbyref(&a,&b);
    printf("\nNUMBER AFTER SWAPING BY REFERANCE\n");
    printf("\na=%d\nb=%d",a,b);
    getch();
}
void swapbyvalue(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("n\nNUMBER AFTER SWAPPING BY VALUE ARE \n");
    printf("a=%d",x);
    printf("\nb=%d",y);
}
void swapbyref(int *x,int *y)
{
int temp;
temp=*x;
*x=*y;
*y=temp;
}

