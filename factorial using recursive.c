#include<stdio.h>
#include<conio.h>

int fact(int n)

{
    if(n == 0 || n == 1)
    {
        return 1;
    }
    else 
    {
        return n*fact(n-1);
    }
}

void main()

{
    int n;
    printf("Enter the n value :");
    scanf("%d",&n);
    
    printf("the factorial value of  n is :%d\n",n);
    printf("the value of fact(n) is : %d",fact(n));
}
