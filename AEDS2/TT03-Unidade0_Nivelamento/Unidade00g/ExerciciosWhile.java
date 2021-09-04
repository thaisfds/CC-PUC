import java.io.*;
import java.util.*;

public class ExerciciosWhile {
    /*Faça um programa que leia a nota de 5 alunos e mostre na tela a média 
    das mesmas*/
    public static void mediaNotas(){

        int[] array = new int[5];
        MyIO.println("Digite as notas: ");
        int i = 0;
        int soma = 0;
        float media = 0;

        while(i < 5){
            array[i] = MyIO.readInt();
            soma += array[i];
            i++;
        }

        media = soma/5;
        MyIO.println("Media = " + media);
    }

    /*Faça um programa que mostre os 10 primeiros números inteiros positivos.*/

    /*Faça um programa que leia um número inteiro N e mostre na tela os N 
    primeiros números inteiros ímpares.*/

    /* Faça um programa que leia um número inteiro N e mostre na tela os N 
    primeiros números da sequência 1, 5, 12, 16, 23, 27 34*/

    /*Faça um programa que leia um número inteiro N indicando a nota máxima 
    em uma prova P. Em seguida, leia a nota de 20 alunos (entre 0 e N) e 
    mostre na tela: (i) a média da turma, (ii) o número de alunos cuja nota foi 
    menor que a média da Universidade (suponha 60%) e (iii) a quantidade de 
    alunos com conceito A (mais de 90%).*/

    /*Faça um programa que leia um número inteiro n e mostre na tela o n-ésimo 
    termo da sequência de Fibonacci*/


    public static void main(String[] args) {
        //mediaNotas();
    }
}