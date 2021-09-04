#include <stdio.h>
#include <math.h>

int main(void) {
 int hora,min,mintotal;

 printf("\nDigite as horas: ");
 scanf("%d",&hora);
 printf("\nDigite os minutos: ");
 scanf("%d",&min);

 mintotal = (hora*60)+min;
  printf("\nSe passaram %d minutos desde o inicio do dia",mintotal);

 return 0;
}