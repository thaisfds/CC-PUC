#include <stdio.h>
#include <math.h>

int main(void) {
 float kw,smin,kwreais,vpagar,vpagar10;
 int kwgasto;

 printf("\nDigite o valor do salario minimo: ");
 scanf("%f",&smin);
 printf("\nDigite o gasto em kw: ");
 scanf("%d",&kwgasto);

 kwreais = (smin/7)/100; //100kw/100 = 1kw
 vpagar = kwreais*kwgasto;
 vpagar10 = vpagar*0.9;

 printf("\nValor em reais de cada kilowatt: %.2f",kwreais);
 printf("\nValor em reais a ser pago: %.2f",vpagar);
 printf("\nValor a ser pago com 10%% de desconto: %.2f",vpagar10);

 return 0;
}