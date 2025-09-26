#include <stdio.h>
int main()
{
    printf("Enter number");
    int num;
    int sum=0;
    int i;
    scanf("%d",&num);
    for(i=1;i<num;i++)
{
    if (num%i==0)
    {
       sum = sum+i;

    }
}
if (sum==num)
 printf("It is a perfect number");

else 
 printf("It isn't a perfect number");

return 0;
}