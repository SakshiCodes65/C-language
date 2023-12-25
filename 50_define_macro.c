# include<stdio.h>
# include<math.h>

#define r 5
#define pi 3.14
// #undef pi
int main()
{
    printf("area is %f\n", pi*pow(r,2));//r^2  this is wrong
    printf("circumference is %f\n", 2*pi*r);
    return 0;
}