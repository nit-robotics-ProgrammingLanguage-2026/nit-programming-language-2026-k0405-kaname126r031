#include <stdio.h>

int main(void) {
   double r=4.0;
   double pi=3.141592;
   double x;
   double a;

   scanf("%lf",&x);
   a=x*360.0/(2.0*pi*(r/2.0));
   printf("%f",a);
 
    return 0;
}
