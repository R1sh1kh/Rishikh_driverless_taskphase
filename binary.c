//
#include <stdio.h>
#include <math.h>
int main()
{
    printf("Enter a binary number");
    int n;
    scanf("%d",&n);
    int dig,sum=0,k=0;
    while(n!=0)
    
    {
        dig=n%10;
        sum= sum+dig*pow(2,k);
        n=n/10;
        k=k+1;


    }
    printf("The decimal equivalent of the binary is %d",sum);
}