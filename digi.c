#include <stdio.h>
#include <math.h>
int main()
{
    printf("enter number");
    int num;
    scanf("%d",&num);
    int dig;
    
    

    int dl = num%10;
    while(num>0)
    {
         dig=num%10;
         num=num/10;
         
    }
    int d1=dig;
    printf("The first digit %d is and the last digit is %d",d1,dl);
    
}
    


     
