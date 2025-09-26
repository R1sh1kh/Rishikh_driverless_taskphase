#include <stdio.h>
int main()

{
    int num;
    int i,prime=0,comp=0;
    int count=0;
    

    
    do 
    {
        printf("Enter number");
        scanf("%d",&num);
        prime=0;
        
        for (i=2;i<num;i++)
        {
            if(num%i==0)
            {
                prime=1;
                comp= comp+1;
                break;
            } 
        }
        if(prime==0)
        {
            
            count=count+1;
        }
    }
     while(num!=-1);

     printf("The number of prime numbers are %d\n",count);
     printf("The number of co   mposite are %d",comp);


        


        
    }
   