#include <stdio.h>
#include<conio.h>

int sum(int n)
{
    if(n == 0)
       return 0;
    else 
       return n + sum(n-1);
    
}

void main()
{

int n;
printf("enter the num n :");
scanf("%d",&n);

printf("sum of numbers is 1 to %d : %d\n",n,sum(n));

}
