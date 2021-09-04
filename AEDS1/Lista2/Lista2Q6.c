#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
 float a,b,c,delt1,delt2,x1,x2;
 printf("Digite o valor de a: ");
 scanf("%f",&a);
 printf("\nDigite o valor de b: ");
 scanf("%f",&b);
 printf("\nDigite o valor de c: ");
 scanf("%f",&c);

 //bhaskara
 delt1 = pow(b,2)-(4*a*c);
 printf("\nDelta = %g",delt1);

 if(delt1>0){
   x1 = ((-b+sqrt(delt1))/(2*a));
   x2 = ((-b-sqrt(delt1))/(2*a));
   printf("\nAs duas raizas sao: %g e %g",x1,x2);
 }
 else if(delt1==0){
   x1 = ((-b+sqrt(delt1))/(2*a));
   printf("\nAs duas raizas sao: %g e %g",x1,x1);
 }
 else{
   x1 = ((-b)/(2*a));
   delt2 = sqrt(-delt1)/(2*a);
   printf("\nAs duas raizas sao: %g+%gi e %g+%gi",x1,delt2,x1,delt2);
 }

 return 0;
}