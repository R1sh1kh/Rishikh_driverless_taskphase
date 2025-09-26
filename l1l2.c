#include <stdio.h>
int main()
{
    printf("Enter number of elements");
    int n, arr[50];
    scanf("%d",&n);
    int i,pos;
    for (i=0; i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0; i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    for(i=1;i<n;i++)
    {
     pos=0;
    
        if (arr[0]>arr[i])
          continue;

        else
        {
         pos =i+1 ;
         arr[0]=arr[i];
    }
    }
    printf("The largest element is %d\n", arr[0]);
    for(i=pos-1;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    n=n-1;

    for(i=1;i<n;i++)
    {
        if(arr[1]>arr[i])
          continue;

        else
         arr[1]=arr[i];


    }
    printf("The second largest element is %d",arr[1]);



}
