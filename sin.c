#include <stdio.h>
#define pi 3.141592
int main()
{

    int n;
    float x;
    printf("Enter number of terms and angle");
    scanf("%d %f",&n, &x);

    
    x=x*pi/180;
    float sum=x;
    float term=x;
    int i;

    for (i=1;i<n;i++)
    {
        
        term = term*(-1)*x*x/((2*i)*(2*i+1));
        sum = sum+term;

    }

    printf("The library value of sin(%f) is %f ",x,sum);

    return 0;
}