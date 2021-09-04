import java.io.*;
import java.util.*;

import jdk.javadoc.internal.doclets.formats.html.resources.standard;

public class ExerciciosArray {
    
    /*Faça um programa que leia os elementos de um array de tamanho n e 
    mostre a posição do menor elemento do array*/
    public static void menorElemento(){

        MyIO.print("Entre com o tamanho do array: ");
        int n = MyIO.readInt(); //le e armazena o tamanho

        int[] array = new int[n];
        MyIO.println("Digite os valores do array: ");
        for (int i = 0; i < array.length; i++) {array[i] = MyIO.readInt();}

        int menor = array[0];

        for(int i=0; i<array.length; i++){
            if(menor > array[i]){menor = array[i];}
        }

        MyIO.println("Menor = " + menor);
    }

    /*Faça um programa que leia os elementos de um array de tamanho n e 
    mostre a posição do menor elemento do array*/
    public static void posicaoMenor(){

        MyIO.print("Entre com o tamanho do array: ");
        int n = MyIO.readInt(); //le e armazena o tamanho

        int[] array = new int[n];
        MyIO.println("Digite os valores do array: ");
        for (int i = 0; i < array.length; i++) {array[i] = MyIO.readInt();}

        int menor = array[0];
        int posicao = 0;

        for(int i=0; i<array.length; i++){
            if(menor > array[i]){
                menor = array[i];
                posicao = i;
            }
        }

        MyIO.println("Posicao do menor = " + posicao);
    }

    /*Faça um programa que leia dois Introdução ao Java de int e mostre a união 
    e a intercessão entre os elementos desses arrays*/
    

    /*Declare um vetor com contendo os elementos 10, 5, 8, 2 e 8. Em seguida, 
    mostre os elementos contidos no array*/
    public static void printArray(){

        int[] array = {10,5,8,2,8};

        for(int i=0; i<array.length; i++){
            MyIO.print(array[i]);
        }
        MyIO.print("\n");

    }

    /*Faça um programa para ler a nota de cinco alunos, calcular e mostrar: a 
    soma e a média das mesmas e a menor nota*/
    public static void somaMediaMenor(){

        int[] array = new int[5];
        MyIO.println("Digite as notas: ");
        for (int i = 0; i < array.length; i++) {array[i] = MyIO.readInt();}

        int soma = 0;
        float media = 0;
        int menor = array[0];

        for(int i=0; i<array.length; i++){
            soma += array[i];
            if(menor > array[i]){
                menor = array[i];
            }
        }

        media = soma/5;

        MyIO.println("Soma = " + soma);
        MyIO.println("Media = " + media);
        MyIO.println("Menor = " + menor);
    }

    /*Faça um programa para ler N números inteiros, calcular a média deles e 
    mostrar aqueles que forem maiores que a média*/

    public static void mediaMaior(){

        MyIO.print("Entre com o tamanho do array: ");
        int n = MyIO.readInt(); //le e armazena o tamanho

        int[] array = new int[n];
        MyIO.println("Digite os valores: ");
        for (int i = 0; i < array.length; i++) {array[i] = MyIO.readInt();}

        int soma = 0;
        float media = 0;

        for(int i=0; i<array.length; i++){
            soma += array[i];
        }

        media = soma/n;

        MyIO.println("Media = " + media);
        MyIO.println("Os numeros acima da media sao: ");

        for(int i=0; i<array.length; i++){
            if(array[i]>media){
                MyIO.print(array[i] + " ");
            }
        }
    }

    /*Faça um programa para ler um número inteiro N e N elementos de um 
    array. Em seguida, se N for par mostrar na tela a soma do 1o e 2o 
    elemento, 3o e 4o, …*/
    public static void nParImpar(){

        MyIO.print("Entre com o tamanho do array: ");
        int n = MyIO.readInt(); //le e armazena o tamanho

        int[] array = new int[n];
        MyIO.println("Digite os valores: ");
        for (int i = 0; i < array.length; i++) {array[i] = MyIO.readInt();}

        int soma = 0;
        if(n%2 == 0){
            for(int i=0; i<array.length; i = i+2){
                soma = array[i] + array[i+1];
                MyIO.println("Soma = " + soma);
            }
        }
        
    }

    /* Faça um programa para ler um número inteiro N e N elementos de um 
    array. Em seguida, encontre a posição do menor elemento*/
    public static void posicaoMenor2(){

        MyIO.print("Entre com o tamanho do array: ");
        int n = MyIO.readInt(); //le e armazena o tamanho

        int[] array = new int[n];
        MyIO.println("Digite os valores do array: ");
        for (int i = 0; i < array.length; i++) {array[i] = MyIO.readInt();}

        int menor = array[0];
        int posicao = 0;

        for(int i=0; i<array.length; i++){
            if(menor > array[i]){
                menor = array[i];
                posicao = i;
            }
        }

        MyIO.println("Posicao do menor = " + posicao);
    }
    
    /*Faça um programa para ler um número inteiro N e N elementos de um 
    array. Em seguida, calcular e mostrar o número de elementos pares e o de 
    divisíveis por três.*/
    public static void paresDivisivel3(){

        MyIO.print("Entre com o tamanho do array: ");
        int n = MyIO.readInt(); //le e armazena o tamanho

        int[] array = new int[n];
        MyIO.println("Digite os valores: ");
        for (int i = 0; i < array.length; i++) {array[i] = MyIO.readInt();}

        int countPar = 0;
        int countDiv3 = 0;
        
        for(int i=0; i<array.length; i = i+2){
            if(n%2 == 0){countPar++;}
            if(n%3 == 0){countDiv3++;}
        }

        MyIO.println("Numeros de pares = " + countPar);
        MyIO.println("Numeros de div por 3 = " + countDiv3);
        
    }

    /* Faça um programa que leia N números inteiros e mostre na tela a soma do 
    primeiro e do último, a do segundo e do penúltimo, a do terceiro e do 
    antepenúltimo, …*/
    public static void somaPrimeiroUltimo(){

        MyIO.print("Entre com o tamanho do array: ");
        int n = MyIO.readInt(); //le e armazena o tamanho

        int[] array = new int[n];
        MyIO.println("Digite os valores: ");
        for (int i = 0; i < array.length; i++) {array[i] = MyIO.readInt();}

        int soma = 0;
        for(int i=0,j=array.length-1; i<array.length/2; i++, j--){
            soma = array[i] + array[j];
            MyIO.println("Soma = " + soma);
        }
        
    }

    /* Faça um programa que leia N números inteiros e mostre na tela a soma 
    daqueles que forem múltiplos de três*/
    public static void multplos3(){

        MyIO.print("Entre com o tamanho do array: ");
        int n = MyIO.readInt(); //le e armazena o tamanho

        int[] array = new int[n];
        MyIO.println("Digite os valores: ");
        for (int i = 0; i < array.length; i++) {array[i] = MyIO.readInt();}

        int soma = 0;
        
        for(int i=0; i<array.length; i = i++){
            if(n%3 == 0){soma += array[i];}
        }

        MyIO.println("Soma dos multiplos de 3 = " + soma);
        
    }

    /*Faça um programa para ler dois vetores contendo N elementos cada. Em 
    seguida, mostre os elementos de forma intercalada*/
    public static void intercalado(){

        MyIO.print("Entre com o tamanho dos arrays: ");
        int n = MyIO.readInt(); //le e armazena o tamanho

        int[] array1 = new int[n];
        int[] array2 = new int[n];
        int[] array3 = new int[2*n];

        MyIO.println("Digite os valores do array 1: ");
        for (int i = 0; i < n; i++) {array1[i] = MyIO.readInt();}

        MyIO.println("Digite os valores do array 2: ");
        for (int i = 0; i < n; i++) {array2[i] = MyIO.readInt();}
        
        for(int i=0,j=0; i<n; i++, j = j+2){
            array3[j] = array1[i];
            array3[j+1] = array2[i];
        }

        for (int i = 0; i < array3.length; i++) {MyIO.print(array3[i] + " ");}
        
    }

    /*Faça um programa para ler um vetor contendo N elementos e outro 
    contendo M elementos. Em seguida, mostre os elementos de forma 
    intercalada*/
    public static void intercaladoNM(){

        MyIO.print("Entre com o tamanho do array 1: ");
        int n = MyIO.readInt(); //le e armazena o tamanho

        MyIO.print("Entre com o tamanho do array 2: ");
        int m = MyIO.readInt(); //le e armazena o tamanho

        int[] array1 = new int[n];
        int[] array2 = new int[m];
        int maior;

        MyIO.println("Digite os valores do array 1: ");
        for (int i = 0; i < n; i++) {array1[i] = MyIO.readInt();}

        MyIO.println("Digite os valores do array 2: ");
        for (int i = 0; i < m; i++) {array2[i] = MyIO.readInt();}
        
        if(n>m){maior = n;}
        else{maior = m;}

        for(int i=0; i<maior; i++){
            if(i<array1.length){
                MyIO.print(array1[i] + " ");
            }
            if(i<array2.length){
                MyIO.print(array2[i] + " ");
            }
        }
        
    }

    /*Faça um programa para ler um vetor contendo N elementos inseridos em 
    uma ordem qualquer e mostre os elementos de forma ordenada*/
    public static void sort(){
        MyIO.print("Entre com o tamanho do array: ");
        int n = MyIO.readInt(); //le e armazena o tamanho
        int[] array = new int[n];
        MyIO.println("Digite os valores do array: ");
        for (int i = 0; i < n; i++) {array[i] = MyIO.readInt();}

        int j;
        int key;
        int i;

        for (j = 1; j < vetor.length; j++){
            key = array[j];
            for (i = j - 1; (i >= 0) && (array[i] > key); i--){
                array[i + 1] = array[i];
            }
            array[i + 1] = key;
        }
        
    }


    public static void main(String[] args) {
        //menorElemento();
        //posicaoMenor();
        //printArray();
        //somaMediaMenor();
        //mediaMaior();
        //nParImpar();
        //posicaoMenor2();
        //paresDivisivel3();
        //somaPrimeiroUltimo();
        //multplos3();
        //intercaladoNM();
        //sort();
    }
}