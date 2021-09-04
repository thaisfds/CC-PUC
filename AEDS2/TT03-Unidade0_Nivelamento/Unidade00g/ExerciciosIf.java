import java.io.*;
import java.util.*;
import static java.lang.Math.sqrt;

public class ExerciciosIf {
    
    /*Faça um programa que leia três números reais representando os lados 
    de um triângulo e informe se seu triângulo é Equilátero, Isósceles ou 
    Escaleno*/
    public static void tipoTriangulo(){
        MyIO.print("Entre com o primeiro lado: ");
        float l1 = MyIO.readFloat(); //le e armazena o tamanho
        MyIO.print("Entre com o segundo lado: ");
        float l2 = MyIO.readFloat(); //le e armazena o tamanho
        MyIO.print("Entre com o terceiro lado: ");
        float l3 = MyIO.readFloat(); //le e armazena o tamanho

        if(l1 == l2 && l2 == l3){
            MyIO.println("Triangulo Equilatero");
        }
        else if((l1 == l2 && l1 != l3)||(l2 == l3 && l2 != l1)||(l3 == l1 && l3 != l2)){
            MyIO.println("Triangulo Isosceles");
        }
        else{
            MyIO.println("Triangulo Escaleno");
        }
        
    }

    /*Leia 3 números inteiros, selecione o menor e o maior e imprima os seus 
    respectivos valores na tela.*/
    public static void maiorMenor(){
        MyIO.print("Entre com o primeiro numero: ");
        int n1 = MyIO.readInt(); //le e armazena o tamanho
        MyIO.print("Entre com o segundo numero: ");
        int n2 = MyIO.readInt(); //le e armazena o tamanho
        MyIO.print("Entre com o terceiro numero: ");
        int n3 = MyIO.readInt(); //le e armazena o tamanho

        int maior = n1;
        int menor = n1;


        if(maior<n2){maior = n2;}
        if(maior<n3){maior = n3;}
        if(menor>n2){menor = n2;}
        if(menor>n3){menor = n3;}

        MyIO.println("Maior = " + maior + " Menor = " + menor);
        
    }

    /*Leia 10 números inteiros, selecione o maior e imprima seu valor na tela.*/
    public static void maior10(){

        int[] array = new int[10];
        MyIO.println("Digite os 10 valores: ");
        for (int i = 0; i < 10; i++) {array[i] = MyIO.readInt();}

        int maior = array[0];

        for(int i=0; i<10; i++){
            if(maior < array[i]){maior = array[i];}
        }

        MyIO.println("Maior = " + maior);
    }

    /*Leia dois números. Se um deles for maior que 45, realize a soma dos 
    mesmos. Caso contrário, se os dois forem maior que 20, realize a subtração 
    do maior pelo menor, senão, se um deles for menor do que 10 e o outro 
    diferente de 0 realize a divisão do primeiro pelo segundo. Finalmente, se 
    nenhum dos casos solicitados for válido, mostre seu nome na tela.*/
    public static void doisNumeros(){
        MyIO.print("Entre com o primeiro numero: ");
        int n1 = MyIO.readInt(); //le e armazena o tamanho
        MyIO.print("Entre com o segundo numero: ");
        int n2 = MyIO.readInt(); //le e armazena o tamanho

        float resultado;

        if(n1>45 || n2>45){
            resultado = n1+n2;
            MyIO.println("Resultado = " + resultado);
        }
        else if(n1>20 || n2>20){
            if(n1>n2){resultado = n1-n2;}
            else{resultado = n2-n1;}
            MyIO.println("Resultado = " + resultado);
        }
        else if(n1>10 && n2!=0){
            resultado = n1/n2;
            MyIO.println("Resultado = " + resultado);
        }
        else if(n2>10 && n1!=0){
            resultado = n2/n1;
            MyIO.println("Resultado = " + resultado);
        }
        else{MyIO.println("Thais Ferreira da Silva");}
        
    }

    /*Seja uma partida de futebol, leia os números de gols do mandante e do 
    visitante e imprima quem foi o vencedor ou se foi empate.*/
    public static void futebol(){
        MyIO.print("Entre com os gols do mandante: ");
        int n1 = MyIO.readInt(); //le e armazena o tamanho
        MyIO.print("Entre com os gols do visitante: ");
        int n2 = MyIO.readInt(); //le e armazena o tamanho

        float resultado;

        if(n1>n2){
            MyIO.println("Mandante ganhou");
        }
        else if(n2>n1){
            MyIO.println("Visitante ganhou");
        }
        else{MyIO.println("Empate");}
        
    }

    /*O banco do Zé abriu uma linha de crédito para os seus clientes. O valor 
    máximo da prestação não poderá ultrapassar 40% do salário bruto. Fazer 
    um algoritmo que permita entrar com o salário bruto e o valor da prestação 
    e informar se o empréstimo será concedido.*/
    public static void emprestimo(){
        MyIO.print("Entre com o salario bruto: ");
        int salario = MyIO.readInt(); //le e armazena o tamanho
        MyIO.print("Entre com o valor da prestacao: ");
        int prestacao = MyIO.readInt(); //le e armazena o tamanho

        float porcentagem = 0.4*salario;

        if(prestacao<porcentagem){
            MyIO.println("Concedido");
        }
        else{
            MyIO.println("Nao concedido");
        }
        
    }

    /* Leia dois números reais e imprima a raiz cúbica do menor e o logaritmo do 
    menor considerando o maior como a base desse logaritmo.*/
    public static void raizLogaritmo(){
        MyIO.print("Entre com o primeiro numero: ");
        float n1 = MyIO.readFloat(); //le e armazena o tamanho
        MyIO.print("Entre com o segundo numero: ");
        float n2 = MyIO.readFloat(); //le e armazena o tamanho
        int raiz, log;

        if(n1<n2){
            log = Math.log(n2)/Math.log(n1);
            raiz = n1*n1*n1;
            MyIO.println("raiz = " + raiz + " log = " + log);
        }
        else{
            log = Math.log(n1)/Math.log(n2);
            raiz = n2*n2*n2;
            MyIO.println("raiz = " + raiz + " log = " + log);
        }
        
    }

    /* Leia 10 números inteiros, selecione o menor e o maior e imprima os seus 
    respectivos valores na tela.*/
    public static void maiorMaior10(){

        int[] array = new int[10];
        MyIO.println("Digite os 10 valores: ");
        for (int i = 0; i < 10; i++) {array[i] = MyIO.readInt();}

        int maior = array[0];
        int menor = array[0];

        for(int i=0; i<10; i++){
            if(maior < array[i]){maior = array[i];}
            if(menor > array[i]){menor = array[i];}
        }

        MyIO.println("Maior = " + maior + " Menor = " + menor);
    }


    public static void main(String[] args) {
        //tipoTriangulo;
        //maiorMenor();
        //maior10();
        //doisNumeros();
        //futebol();
        //emprestimo();
        //raizLogaritmo();
        //maiorMaior10();
    }
}