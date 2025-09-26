#include <stdio.h>
int main()
{
    printf("Enter number ");
    int num,dig,i,fact=1,sum=0,n;

    scanf("%d",&num); 
    n=num;
    if(num>0)
    {

     while(num>0)
     {
        dig=num%10;
        for(i=1;i<=dig;i++)
        {
            fact=fact*i;
            

        }
        sum=sum+fact;
        num=num/10;
        fact=1;
     }
    }

    if(sum==n)
     printf("It is a strong number");

    else
     printf("Its not a strong number");
}