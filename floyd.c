#include <stdio.h>
int main()
{
    printf("Enter input N");
    int n,row,i,j;
    int num=1;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d\t",num);
            num= num+1;

        }
        printf("\n");
    }

}