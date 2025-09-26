#include <stdio.h>
int main()
{
    printf("Enter number of elements in array");
    int n, arr[50];
    scanf("%d", &n);
    int i,j;
    for ( i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);

    }
    int prime;


    for (i=0; i<n; i++)
    {
        
          prime =0;
        int num = arr[i];
        if (num<2)
         prime =1;
         else{
        for (j=2; j<num;j++)
        {
            if (num%j==0)
            prime= 1;
            break;
        }
    }
        if (prime==0)
         printf("%d in array is a prime number \n ", num);
    }

    return 0;
}