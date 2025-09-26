
#include <stdio.h>
int main()
{
    printf("Enter number of elements");
    int n, arr[50];
    scanf("%d",&n);
    int i;
    for (i=0; i<n;i++)
    {
        scanf("%d",&arr[i]);

    }

    printf("Enter position to be deleted");
    int pos;
    scanf("%d",&pos);

    for (i=pos-1;i < n-1; i++)
    {
        arr[i]=arr[i+1];
    }
    n=n-1;
    int j;

    for(j=0;j<n;j++)
    {
        printf("%d\t",arr[j]);
    }




    }
