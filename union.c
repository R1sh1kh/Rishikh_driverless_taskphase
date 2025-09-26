#include <stdio.h>
int main()
{
    printf("Enter number of elements for first array \t");
    int n, arr[50];
    scanf("%d",&n);
    int i,pos=0;
    for (i=0; i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0; i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");

    int j,a[50];
    printf("Enter number of elements for second array \t");
    int m;
    scanf("%d",&m);
    for (j=0; j<m;j++)
    {
        scanf("%d",&a[j]);
    }
    for (j=0; j<m;j++)
    {
        printf("%d\t",a[j]);
    }
    printf("\n");
    printf("Intersection { ");

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if (arr[i]==a[j])
            
            printf("%d ",arr[i]);
        }
    }
    printf("}");

    for(i=0;i<n;i++)
    {
        pos=0;

        for(j=0;j<m;j++)
        {
            if (arr[i]==a[j])
            {
            pos = i+1;
            
            for(i=pos-1;i<n-1;i++)
            {
                arr[i]=arr[i+1];
                
                
            }
         i=i-1;
            }
            
        }
        printf("The union set: { ");
        for(i=0;i<n;i++)
        {
        printf("%d ",arr[i]);
        }
        for (j=0;j<m;j++)
        {
            printf("%d ", a[j]);

        }
        printf("}");
    }
}
