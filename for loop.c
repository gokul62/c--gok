//sum of n natural no 
#include<stdio.h>
#include<conio.h>

void main()

{
   int i,n;
   int sum = 0;
   
   printf("enter the value");
   scanf("n%d",&n);
   
   for (i=1;i<=n;i++)
   {
       sum = sum +i;
      }
   
   printf("sum :%d",sum);
   
}
