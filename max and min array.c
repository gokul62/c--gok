#include<stdio.h>
#include<conio.h>

void main()

{
    
    int n,arr[50],min,max;
    int i;
    
    printf("enter n: ");
    scanf("%d",&n);
    
    for (i=0;i<n;i++)
    
    {
        printf (" enter element: %d",i);
        scanf("%d",&arr[i]);
        
        
    }
    
    min = arr[0];
    max = arr[0];
    
    for (i=1;i<n;i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
        
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
        
        printf("max: %d \n",max);
        printf("min: %d ",min);
        
        getch();
        
    }
