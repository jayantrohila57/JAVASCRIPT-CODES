//PROGRAM #6
//TO PERFORM THE FOLLOWING OPERATIONS ON STRING USING FUNCTIONS
//(1)ADDITION, (2)COPYING, (3)REVERSE, (4)LENGTH OF STRING.
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char a[20],b[20],c[20];
    int l;
    //clrscr();
    printf("TO PERFORM THE FOLLOWING OPERATIONS ON STRING USING FUNCTIONS\n(1)ADDITION,\n(2)COPYING,\n(3)REVERSE,\n(4)LENGTH OF STRING.\n");
    printf("ENTER THE FIRST STRING=\n");
    scanf("%s",&a);
    printf("ENTER THE SECOND STRING=\n");
    scanf("%s",&b);
    strcat(a,b);
    printf("\nConcentration of String a and b is :%s",a);
    l=strlen(a);
    printf("\nLength of string is %d",l);
    strcpy(c,a);
    printf("\nThe Copied String is %s",c);
    strrev(a);
    printf("\n Reverse of String is %s",a);
    getch();

}
