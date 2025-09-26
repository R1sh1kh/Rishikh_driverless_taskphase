#include <stdio.h>
int main()
{
    printf("Enter dimensions");
    int m ,n, arr[50][60],i,j,sum;
    scanf("%d %d",&m, &n);
    for (i=0;i<m;i++)
    
    {
        for ( j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);

        }
        
    }
    for (i=0;i<m;i++)
    {
        
        for ( j=0;j<n;j++)
        {
           printf("%d\t",arr[i][j]);
           sum = sum+arr[i][j];
           

        }
        printf("-- %d",sum);
        printf("\n");  
        sum =0;
    }
    sum=0;
        for(j=0;j<n;j++)
        {
            for (i=0;i<m;i++)
            {
                sum= sum+arr[i][j];
                
            }
            printf("%d\t",sum);
            sum=0;  
        }
    }
    
