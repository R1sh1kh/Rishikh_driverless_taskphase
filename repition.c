#include <stdio.h>
int main()
{
    printf("Enter number");
    int num;
    scanf("%d",&num);
    int arr[50];
    int dig,i,count;
    while( num > 0)
    {
        dig = num%10;
        num = num/10;  
        count = count + 1; 
        for(i=0;;i++)
        {
            arr[i]= dig;
            if (num==0)
             break;

        }

    }
    int j,k;
    for(j=0;j<count;j++)
    {
        for(k=0;k<count;k++)
        {
            if (arr[i]==arr[j])
             

        }
    }
}