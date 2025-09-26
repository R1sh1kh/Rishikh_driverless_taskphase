#include <stdio.h>
int main()
{
    printf("enter number");
    int num;
    scanf("%d",&num);
    int i;
    for(i=1;i<=num;i++) 
    {
        if (num%i==0)
         printf("%d\t",i);
    }


    
}