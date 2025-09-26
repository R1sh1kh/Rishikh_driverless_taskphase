#include <stdio.h>
int main()
{
    printf("Enter number: \n");
    int num;
    scanf("%d",&num);
    if ( num >=50 || num <=4)
       printf("Enter valid number\n");

    int i,j,k;
    int prime;
    printf("2 : PRIME\n");
    for(j =3;j<=num;j++)
    {
        prime =0;
    for (i=2;i<j;i++)
    {
        
        if(j%i==0)
        {
        prime =1;
        printf("%d : Factors: ",j);
        
        for (k=1;k<=j;k++)
        {
            if (j%k==0)
            {
                printf("%d\t",k);
            }

        }
        printf("\n");
        break;
    }
    }
    if (prime==0)
    {

        printf("%d : PRIME\n",j);
    }
}
}