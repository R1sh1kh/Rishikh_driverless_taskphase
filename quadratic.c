#include <stdio.h>
#include <math.h>
int main()
{ 
printf("Enter a,b,c coffecients");
int a,b,c;
scanf("%d %d %d",&a, &b, &c);
float disc= pow(b,2)-4*a*c;
int x;
float r1,r2;
if (disc>0)
 x=1;

else if (disc<0)
 x=2;

else 
 x=3;

 switch (x)
 {
    case 1: printf("roots are real and unequal \n");
    r1=(-b+sqrt(disc))/2*a;
    r2=(-b-sqrt(disc))/2*a;
    printf("first root is %f and second root is %f",r1,r2);
    break;

    case 2: printf("roots are imaginary\n");
    float re, im;
    re=-b/2*a;
    im=sqrt(disc)/2*a;
    printf("The first root is %f+i%f",re,im);
    printf("The second root is %f-i%f",re,im);
    break;
    

    case 3: printf("The roots are equal\n");
    r1=(-b+sqrt(disc))/2*a;
    printf("The root is %f",r1);
    break;

}
}