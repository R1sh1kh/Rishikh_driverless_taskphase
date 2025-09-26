#include <stdio.h>
int main()
{
 printf("Enter number of elements in array");
 int n;
 scanf("%d",&n);
 int arr[n];
 int i;
 for(i=0;i<=(n-1);i++)
 {
    scanf("%d",&arr[i]);
    printf("Element one is %d \n",arr[i]);
    
 }
}