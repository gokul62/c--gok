#include<stdio.h>
#include<conio.h>

void main()

{
   int i=1;//we use 0 means the ans is 0 ,so we use 1
   int fact=1;
   int n;
   printf("enter the value");
   scanf("n:%d",&n);
   
   while (i<=n)
   {
       fact = fact*i;
i++;
   }
   
   printf("fact :%d",fact);
   
 
}
