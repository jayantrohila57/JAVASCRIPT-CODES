//TO SEARCH AN ELEMENT IN ARRAY USING LINEAR SEARCH

#include<stdio.h>
#include<conio.h>
 void main()
 {
     int a[10],i,item,flag=0;
     //clrscr();   
     printf("TO SEARCH AN ELEMENT IN ARRAY USING LINEAR SEARCH");
     printf("\nENTER THE DATA IN THE ARRAY=\n");
     for(i=0;i<10;i++)
     {
         scanf("%d",&a[i]);
     }
    printf("ENTER THE ELEMENT TO BE SAERCHED=");
    scanf("%d",&item);
    for(i=0;i<10;i++)
    {
        if(item==a[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    printf("ELEMENT NOT FOUND=");
    else
    printf("ELEMENT FOUND AT PLACE %d",i);
    getch();
 }
