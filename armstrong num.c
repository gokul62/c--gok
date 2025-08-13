#include <stdio.h>
#include<conio.h>
#include<math.h>
void main()

{
    int n;
    int sum = 0;
    int copy = n;
    int digit =0;
    
    printf("enter the n value: ");
    scanf("%d",&n);
    
    copy = n;
    
    while (copy>0)//find total no of digits 
    {
        copy=copy/10;
        digit++;
    }
    
    copy = n;
    
    while (copy>0)
    {
        sum = sum+pow((copy%10),digit);
         copy = copy/10;
    }
    if (sum ==n)
    {
        printf("armstrong");
    }
    else {
        printf("not armstrong");
    }
    
}

