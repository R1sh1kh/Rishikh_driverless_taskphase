#include <stdio.h>
int main()
{
    printf("enter number: ");
    int num;
    scanf("%d",&num);
    int i;
    int prime =1;
    for(i=2;i<=num/2;i=i+1)
    {
        if (num%i==0)
        {
            prime =0;
            break;
        }



    }

if (prime==0)
    printf("not a prime number");

else 
    printf("prime number");
    return 0;
}