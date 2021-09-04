int main(void) {
 int num1,num2;
 printf("Digite o primeiro numero: ");
 scanf("%d",&num1);
 printf("\nDigite o segundo numero: ");
 scanf("%d",&num2);

 printf("\nA diferenca eh: %d",num1-num2);

 if(num2!=0){
   printf("\nA divisao da: %.2f ",(float)num1/num2);
 }
 else{
   printf("\nNao eh possivel efetuar essa divisao ");
 }

 return 0;
}