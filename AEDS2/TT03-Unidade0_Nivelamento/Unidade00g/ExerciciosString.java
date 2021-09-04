import java.io.*;
import java.util.*;

public class ExerciciosString {
    
    /* Faça um programa que leia uma String e um caractere e mostre na tela 
    quantas vezes esse caractere aparece na String*/
    public static void charString(){

        MyIO.print("Entre com o caracter: ");
        char c = MyIO.readChar(); //le e armazena o tamanho

        MyIO.print("Entre com a string: ");
        String s = "";
        Scanner imput = new Scanner(System.in);
        s = imput.nextLine();

        int count = 0;

        for(int i = 0; i < s.length(); i++){
            if(s.charAt(i) == c){count++;}
        }

        MyIO.println("O caracter " + c + " aparece " + count + " vezes");

    }

    /*Faça um programa que leia uma string e mostre se ela é composta apenas 
    por dígitos*/
    

    /*Faça um programa que leia uma string e a converta para número inteiro*/

    /*Faça um programa que leia uma string e mostre se ela é um palíndromo*/
    public static void palindromo(){

        MyIO.print("Entre com a string: ");
        String s = "";
        Scanner imput = new Scanner(System.in);
        s = imput.nextLine();

        int count = 0;

        for (int i = 0; i < (s.length()); i++) {
            if (s.charAt(i) == s.charAt(s.length() - i - 1)) {
                count = 0;//se o argumento for igual ao oposto dele, retorna true
            } 
            else {
                count++; //se não forem iguais retorna false
                i = s.length(); //encerra o for
            }
        }
        if (count == 0) {MyIO.println("eh palindromo");} 
        else {MyIO.println("nao eh palindromo");}

    }

    /*Faça um programa para ler uma palavra. Em seguida, mostre o número de 
    caracteres da mesma e seu número de caracteres maiúsculos*/
    public static void caracteresCount(){

        MyIO.print("Entre com a string: ");
        String s = "";
        Scanner imput = new Scanner(System.in);
        s = imput.nextLine();

        String x = s.toUpperCase();

        int countCaracteres = 0;
        int countMaiuscula = 0;

        for (int i = 0; i < (s.length()); i++) {
            if (s.charAt(i) == x.charAt(i)) {
                countMaiuscula++;//se o argumento for igual ao oposto dele, retorna true
            } 
            countCaracteres++;
        }
        
        MyIO.println("Caracteres = " + countCaracteres + " maiuscula = " + countMaiuscula);

    }

    /*Faça um programa para ler uma palavra. Em seguida, mostre a primeira 
    ocorrência da letra A*/
    public static void primeiroA(){

        MyIO.print("Entre com a string: ");
        String s = "";
        Scanner imput = new Scanner(System.in);
        s = imput.nextLine();

        String x = s.toUpperCase();

        for (int i = 0; i < (s.length()); i++) {
            if (x.charAt(i) == 'A') {
                MyIO.println("Primeiro A na posicao " + (i+1));
                i = s.length();
            } 
        }
        
    }

    /*Faça um programa para ler uma palavra. Em seguida, mostre os números 
    de caracteres, letras, não letras, vogais e consoantes.*/

    //FIZEMOS NO TP

    public static void main(String[] args) {
        //charString();
        //palindromo();
        //caracteresCount();
        //primeiroA();
    }
}