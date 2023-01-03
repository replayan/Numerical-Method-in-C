/* 1.Find the positive root of the equation x*x*x - 3*x + 1.06 = 0 in (0,1),
     correct up to three decimal places by using Bisection Method.
*/
#include <stdio.h>
#include <math.h>

float f(float x)
{
   float f;
   f = (x * x * x) - (3 * x) + 1.06;
   return (f);
}
int main()
{
   float a, b, e, x0;
   int k = 0;
   printf("\n Enter the accuracy:   ");
   scanf("%f", &e);
   do
   {
      printf("\n Enter interval a,b : ");
      scanf("%f%f", &a, &b);
   } while (f(a) * f(b) > 0.0);
   do
   {
      x0 = (a + b) / 2.0;
      printf("\n k=%d \t x(k)=%f \tf(x0)=%f \n", k, x0, f(x0));
      if (f(a) * f(x0) < 0.0)
         b = x0;
      else
         a = x0;
      k = k + 1;
   } while (fabs(f(x0)) > e);
   printf("\n\n Root of the equation is %f \n", x0);
   printf("\n\n No. of iteration required %d \n", k);
}
