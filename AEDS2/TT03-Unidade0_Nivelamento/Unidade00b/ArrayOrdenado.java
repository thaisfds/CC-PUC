import java.io.*;
import java.util.*;

class ArrayOrdenado {
/*Faça um método que receba um array de inteiros e um 
número inteiro x e retorne um valor booleano informando se o 
elemento x está contido no array*/

    public static boolean estaContido(int[] array){
        MyIO.print("Digite o numero a ser procurado: "); //pede a entrada
        int x = MyIO.readInt(); //le e armazena o que deve ser procurado
        int meio = array.length/2;

        if(x > array[meio]){
            for(int i = meio-1; i<array.length; i++){
                if(array[i]==x){return true;}
            }

        }else{
            for(int i = 0; i<=meio; i++){
                if(array[i]==x){return true;}
            }
        }

        return false;
        
    }

    public static void main (String[] args) throws IOException {

        MyIO.print("Digite o tamanho do array: "); //pede a entrada
        int tam = MyIO.readInt(); //le e armazena o tamanho

        int[] array = new int[tam];
        MyIO.println("Digite os valores do array: ");
        for (int i = 0; i < array.length; i++) {array[i] = MyIO.readInt();}

        if (estaContido(array) == true) {
            MyIO.println("Esta contido");
        } else {
            MyIO.println("Nao esta contido");
        }
    }//fim main
} //fim Array.java