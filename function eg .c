#include <stdio.h>

int add(int x,int y)
{
   int c= x+y;
   int d= x-y;
   
   printf("diff :%d\n",d);
   return c;
}

void main()

{

int x=5;
int y=6;

printf("%d",add(x,y));
getch();

}
