#include<stdio.h>
#include<conio.h>

void main()

{
   int i=1;//we use 0 means the ans is 0 ,so we use 1
   int fact=1;
   int n;
   printf("enter the value");
   scanf("n:%d",&n);
   
  do
   {
       fact = fact*i;
       i++;
   }
   
   while(i<=n);
   printf("fact :%d",fact);
   
 
}
