//TO MERGE TWO SORTED ARRAY INTO ONE SORTED ARRAY
#include<stdio.h>
#include<conio.h>
void main()
{
        int a[10],b[10],c[20],i,j,k,m,n,t;
        //clrscr();
        printf("TO MERGE TWO SORTED ARRAY INTO ONE SORTED ARRAY\n");
        printf("ENTER SIZE OF ARRAY A\n=");
        scanf("%d",&n);
        printf("ENTER THE DATA IN ARRAY A\n=");
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
    i=j=k=0;
    while (i<n&&j<m)
    {
        if(a[i]<b[j])
        c[k++]=a[i++];
        else
        if(a[i]>=b[j])
        c[k++]=b[j++];
    }
    if (i<n)
    {
        for(t=0;t<n;t++)
        c[k++]=a[i++];
    }
    else
    {
        for(t=0;t<m;t++)
        c[k++]=b[j++];
    }
    printf("OUTUPT=\n");
    for(k=0;k<(m+n);k++)
    printf("\n %d",c[k]);
    getch();
    
}
