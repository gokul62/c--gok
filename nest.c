#include<stdio.h>
#include<conio.h>

void main()

{ 
    int i,j,n;
    int flag =0;

printf("enter the n:");
scanf("%d",&n);


for (i=1;i<=n;i++)
{
    if(j==1)
    {
        printf("not prime");
        continue;
    }
    
    flag =0;
    for (j=2;j<i;j++)
    {
        if(j%i !=0)
        {
            continue;
        }
    
    else 
    {
        flag = 1;
        printf("not a prime \n");
        break;
    }
    }
    
    if(flag == 0)
    {
        printf("  prime ");
    }
}
getch();
}


