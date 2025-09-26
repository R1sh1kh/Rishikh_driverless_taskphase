#include <stdio.h>
int main()
{
    printf("Enter dimensions");
    int m,n;
    scanf("%d %d",&m, &n);
    int arr[50][60];
    int i,j;
    printf("Enter elements");
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
            printf("%d ",arr[i][j]);

        }
    }
}