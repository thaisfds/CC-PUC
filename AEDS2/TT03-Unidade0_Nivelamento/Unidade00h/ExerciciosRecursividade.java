import java.io.*;
import java.util.*;

public class ExerciciosRecursividade {
    
    /*Faça um método recursivo que receba um string e retorne um número 
    inteiro indicando a quantidade de caracteres NOT vogal AND NOT 
    consoante maiúscula da string recebida como parâmetro*/

    //alterar
    public static int isVogal(String s, int tam, int vogalQuantidade) {
        if (tam >= 0) {
            if (s.charAt(tam) == 'A' || s.charAt(tam) == 'E' || s.charAt(tam) == 'I' || s.charAt(tam) == 'O'
                    || s.charAt(tam) == 'U') {
                return isVogal(s, tam - 1, vogalQuantidade + 1);
            }else if(s.charAt(tam) == 'a' || s.charAt(tam) == 'b' || s.charAt(tam) == 'c' || s.charAt(tam) == 'd'
                    || s.charAt(tam) == 'e') {
                return isVogal(s, tam - 1, vogalQuantidade + 1);
            }else if((int) frase.charAt(i) > 64 && (int) frase.charAt(i) < 91) {
                return isVogal(s, tam - 1, vogalQuantidade + 1);
            }else {
                return isVogal(s, tam - 1, vogalQuantidade);
            }
        }
        return vogalQuantidade;
    }

    /*Faça um método recursivo que receba um array de inteiros e os ordene*/

    private void trocar(int[] vetor, int i, int j) {
        int temp = vetor[i];
        vetor[i] = vetor[j];
        vetor[j] = temp;
    }
    
    private int dividir(int[] vetor, int inicio, int fim) {
        int pivo, pontEsq, pontDir = fim;
        pontEsq = inicio + 1;
        pivo = vetor[inicio];

        while(pontEsq <= pontDir) {
            while(pontEsq <= pontDir && vetor[pontEsq] <= pivo) {
                pontEsq++;
            }
            while(pontDir >= pontEsq && vetor[pontDir] > pivo) {
                pontDir--;
            }
            if(pontEsq < pontDir) {
                trocar(vetor, pontDir, pontEsq);
                pontEsq++;
                pontDir--;
            }
        }

        trocar(vetor, inicio, pontDir);
        return pontDir;
    }
        
    private void quickSort(int[] vetor, int inicio, int fim) {
        if(fim > inicio) {
        int indexPivo = dividir(vetor, inicio, fim);
        quickSort(vetor, inicio, indexPivo - 1);
        quickSort(vetor, indexPivo + 1, fim);
        }
    }

    /*Faça um método recursivo para cada um dos problemas abaixo
    T(0) = 1
    T(1) = 2
    T(n) = T(n-1) * T(n-2) - T(n-1)

    T(0) = 1
    T(n) = T(n-1)^2*/

    /*Pesquisar e implementar uma solução recursiva para o problema das 
    Torres de Hanói, dado o número de pino*/

    void hanoi(int n,char origem,char destino,char auxiliar){
	    if(n==1){ 
		    printf("\nMova o disco 1 da base %c para a base %c",origem ,destino);
		    return;
	    }
	    hanoi(n-1,origem,auxiliar,destino);
	    printf("\nMova o disco %d da base %c para a base %c",n,origem,destino);
	    hanoi(n-1,auxiliar,destino,origem);
    }

    public static void menu(){
        MyIO.println("**********MENU**********");
        MyIO.println("0- sair");
        MyIO.println("1- NOT vogal AND NOT consoante maiúscula");
        MyIO.println("2- quickSort");
        MyIO.println("3- problemas recursivos");
        MyIO.println("4- Torres de Hanói");
    }
    public static void main(String[] args) {
        menu(); //ok
        MyIO.print("Digite o numero da questao: ");
        int q = MyIO.readInt();

        if(q == 0){

        }else if(q == 1){
            int vogalQuantidade = 0;
            String s = "";
            Scanner imput = new Scanner(System.in);
            s = imput.nextLine();
            int lengh = s.length();
            System.out.println(isVogal(s, lengh - 1, 0));
            
        }else if(q == 2){
            quickSort(vetor, 0, vetor.length - 1);
        }else if(q == 3){
            
        }else if(q == 4){
            int n;
	        printf("Digite o numero de discos : ");
	        scanf("%d",&n);
	        printf("Para resolver a torre de Hanois faça :\n\n");
	        hanoi(n,'A','C','B');
	        printf("\n");
        }
    }
}