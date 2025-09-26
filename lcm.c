#include <stdio.h>
int main()
{
    printf("enter the two nummbers");
    int num1,num2;
    scanf("%d %d",&num1, &num2);
    int i;
    
    for(i=(num1>num2?num1:num2); ;i++)
    {
        if (i%num1==0 && i%num2==0)
        {
            printf("The lcm is %d",i);
            break;
        }


    }
    return 0;
    
  
}