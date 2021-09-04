import java.io.*;
import java.util.*;

public class ArrayMaiorMenor {
/* Faça um método que receba um array de inteiros e mostre na 
tela o maior e o menor elementos do array.*/

    public static void maiorMenor(int[] array){
        int maior = array[0];
        int menor = array[0];

        for(int i=0; i<array.length; i++){
            if(maior < array[i]){maior = array[i];}
            if(menor > array[i]){menor = array[i];}
        }
        MyIO.println("Maior = " + maior + " Menor = " + menor);
    
    }

    public static void main (String[] args) throws IOException {

        MyIO.print("Digite o tamanho do array: "); //pede a entrada
        int tam = MyIO.readInt(); //le e armazena o tamanho

        int[] array = new int[tam];
        MyIO.println("Digite os valores do array: ");
        for (int i = 0; i < array.length; i++) {array[i] = MyIO.readInt();}
        maiorMenor(array);

    }//fim main
} //fim ArrayMaiorMenor.java