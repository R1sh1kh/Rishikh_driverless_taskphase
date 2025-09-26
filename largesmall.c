#include <stdio.h>
int main()
{
    int arr[10],n;
    printf("Enter number of elements ");
    scanf("%d",&n);
    int i;
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int num = arr[0];

    for (i=0;i<n;i++)
    {
        if(arr[0]>arr[i])
         continue;

        else
         arr[0] = arr[i];
    }
    

    printf("The largest number in array is %d \n", arr[0]);

    for( i=0;i<n;i++)
    {
        if (num < arr[i])
         continue;

        else 
         num = arr[i];
        

    }
    printf("The smallest number in array is %d ", num);
    return 0;
}