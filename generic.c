#include <stdio.h>
int main()
{
    printf("Enter number");
    int num,dig,sum=0,sum2,n;
    scanf("%d",&num);
    n = num;
    while(num>=10)
    {
        while(num>0)
        {

        dig=num%10;
        sum=sum+dig;
        num=num/10;

        }
        num = sum;
        sum=0;

}
printf("The generic root of %d is, %d",n,num);
}