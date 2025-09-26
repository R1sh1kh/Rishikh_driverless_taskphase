#include <stdio.h>
int main()
{
    printf("enter number");
    int num;
    scanf("%d",&num);
    int dig=0;
    while(num>0)
    
    {
        dig=dig+1;
        num=num/10;



    }
    printf("the number of digits is %d ",dig);
    return 0;

}