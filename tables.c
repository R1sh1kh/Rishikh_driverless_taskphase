#include <stdio.h>
int main()
{
    printf("Enter n and k");
    int n,k;
    scanf("%d %d",&n, &k);
    int prod;
    int i,j;

    for(i=1;i<=k;i=i+1)
    {
        for(j=1;j<=n;j=j+1)
        {
            prod=i*j;
            printf("%d * %d is %d\t",i, j, prod);
        }
        printf("\n");
    }
return 0;

}