//TO PERFORM THE FOLLOWING OPERATION IN MATRIX--(1)add, (2)sub, (3)mult, (4)transpose.
#include<stdio.h>
#include<conio.h>
void main()
{
    int a[3][3],b[3][3],c[3][3],d[3][3],i,j,k;
    //clrscr();
    printf("TO PERFORM THE FOLLOWING OPERATION IN MATRIX--\n(1)ADDITION\n(2)SUBSTRACTION\n(3)MULTIPLICATION\n(4)TRANSPOSE.");
    printf("ENTER THE DATA IN MATRIX A\n=");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nENTER THE DATA IN MATRIX B\n=");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
       for(j=0;j<3;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("THE ADDITION OF TWO MATRIX OF A AND B IS\n=");
    for(i=0;i<3;i++)
    {
        for(i=0;i<3;i++)
        {
        printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
        for(i=0;i<0;i++)
        {
        for(j=0;j<3;j++)        
        {
        c[i][j]=a[i][j]-b[i][j];    
        }
    }
    printf("substraction of two matrix A & B is\n=");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
    printf("TRANSPOSE OF MATRIX C IS\n=");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            d[j][i]=c[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",d[i][j]);
        }    
        printf("\n");
    }
    printf("MULTIPLICATION OF MATRIX A AND B IS\n=");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=0;
            for(k=0;k<3;k++)
            {
                c[i][j]=c[i][j]+a[i][j]*b[i][j];
            }
        }
    }
    printf("\n");
    for(i=0;i<3;i++)
    {
        for(i=0;i<3;i++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
getch();
}
