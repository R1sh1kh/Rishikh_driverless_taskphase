#include <stdio.h>
#include <stdio.h>
int main()
{
    
   
    printf("enter the lower and upper limits");
    int up,low;
    scanf("%d %d",&low, &up);
    int i,j;
    int prime=1;

    for(i=low;i<=up;i=i+1)
    {
        if (i<2)
         prime=0;
         else{
        for(j=2;j<i;j=j+1)  
        {
            if (i%j==0)
            {
                prime=0;
                break;
            }
    
        }
        if (prime==1)
        {
         printf("%d\t",i);
        }
       
    }}
    return 0;
}