#include <stdio.h>
int main()
{
    int sum=0,i,dig;
    printf("Enter number of digits");
    int n;
    scanf("%d",&n);


    for(i=0;i<n;i++)
{
    printf("Enter digits from the right");
    scanf("%d",&dig);
    sum = sum*10+dig;

}
printf("The number is %d", sum);
}