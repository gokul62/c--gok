//sum of n natural num

#include<stdio.h>
#include<conio.h>

void main()

{
   int i=0;
   int sum = 0;
   int n;
   printf("enter the value");
   scanf("n:%d",&n);
   
   while (i<=n)
   {
       sum = sum+1;
       i++;
   }
   
   printf("sum :%d",sum);
   
 
}
