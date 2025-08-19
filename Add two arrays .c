#include<stdio.h>
#include<conio.h>

void main()

{
    
    int arr1[2][2],arr2[2][2];
    int i,j;
    
    
    for (i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            
            printf("enter the element :");
            scanf("%d",&arr1[i][j]);
        }
    }
    
    printf("next array \n");
    
    for (i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("enter the element j :");
            scanf("%d",&arr2[i][j]);
        }
    }
        
        for (i=0;i<2;i++)
        {
            for(j=0;j<2;j++)
            {
                printf("%d",arr1[i][j]+arr2[i][j]);
            }
            printf("\n");
        }
        
    }
