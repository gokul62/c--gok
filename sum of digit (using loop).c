#include <stdio.h>
#include<conio.h>

void main()

{
    int n;
    int sum = 0;
    
    printf("enter the n value: ");
    scanf("%d",&n);
    
    while (n>0)
    {
        sum = sum+(n%10);
        n=n/10;
    }
    
    printf ("sum of the digits %d",sum);
}
