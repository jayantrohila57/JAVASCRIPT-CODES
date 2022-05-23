//TO SEARCH AN ELEMENT IN 2-D ARRAY USING LINER SEARCH
#include<stdio.h>
#include<conio.h>
void main()
{
    int a[3][3],i,j,item,flag=0;
    //clrscr();
    printf("\nTO SEARCH AN ELEMENT IN 2-D ARRAY USING LINER SEARCH");
    printf("\nENTER THE DATA IN ARRAY=");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("ENTER ELEMENT TO BE SEARCHED="); 
    scanf("%d",&item);
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(item==a[i][j])
            {
                flag=1;
                printf("ELEMENT FOUND AT POSITION = %d,%d",i,j);
            }

        }
    }
    if(flag==0)
    printf("ELEMENT NOT FOUND=");
    getch();
}
