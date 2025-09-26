#include <stdio.h>
int main()
{
    printf("Enter number");
    int num;
    int prime;
    scanf("%d",&num);
    int i;
   while(1)
   {
    prime=1;
    num=num+1;

   
    for(i=2;i<num;i++)
    {
        
        if(num%i==0)
        {
            prime=0;
            break;
        }

    }
    if (prime==1)
    {
     printf("The next prime number is %d",num);
     break;
}
}
}