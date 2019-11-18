#include<stdio.h>
#include<math.h>
int main()
{
    float a,b;
    scanf("%f %f",&a,&b);
    float c=log(b/a)/log(1.25);
    printf("%.0f",ceil(c));
}
