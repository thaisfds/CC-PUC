import java.io.*;
import java.util.*;

public class Exercicios {
    //Leia o nome de um arquivo e uma frase e salve essa frase nesse arquivo
    public static void escreverFrase(){
        String nomeArquivo = MyIO.readString();
        String frase = MyIO.readLine();

        Arq.openWrite(nomeArquivo);
        Arq.println(frase);
        Arq.close();

    }

    //Leia o nome de um arquivo e mostre seu conteúdo na tela
    public static void printarTela(){
        String nomeArquivo = MyIO.readString();
        Arq.openRead(nomeArquivo);
        String texto = Arq.readAll();

        MyIO.println(texto);
        Arq.close();
        
    }

    /*Leia o nome de um arquivo e mostre seu conteúdo convertido para letras
    maiúsculas*/
    public static void toUpperCase(){
        String nomeArquivo = MyIO.readString();
        Arq.openRead(nomeArquivo);
        String texto = Arq.readAll();
        String maiuscula = texto.toUpperCase();

        MyIO.print(maiuscula);
        Arq.close();
    }

    //Leia o nome de dois arquivos e copie o conteúdo do primeiro para o último
    public static void copiaCola(){
        String nomeArquivo1 = MyIO.readString();
        String nomeArquivo2 = MyIO.readString();
        Arq.openRead(nomeArquivo1);
        String texto = Arq.readAll();
        Arq.close();

        Arq.openWrite(nomeArquivo2);
        Arq.print(texto);
        Arq.close();
    }

    /*Leia o nome de dois arquivos, abra o primeiro, converta seu conteúdo
    para letra maiúscula e salve o no segundo*/
    public static void toLowerCase(){
        String nomeArquivo1 = MyIO.readString();
        String nomeArquivo2 = MyIO.readString();
        Arq.openRead(nomeArquivo1);
        String texto = Arq.readAll();
        String minuscula = texto.toLowerCase();
        Arq.close();  

        Arq.openWrite(nomeArquivo2);
        Arq.print(minuscula);
        Arq.close();        
    }

    /*Leia o nome de dois arquivos e copie o conteúdo do primeiro
    para o segundo invertendo a ordem dos caracteres. O último
    caractere no arquivo de entrada será o primeiro do de saída, o
    penúltimo caractere será o segundo, ...*/
    public static void inverteArquivo(){
        StringBuilder builder = new StringBuilder();
        StringBuilder reverse = new StringBuilder();

        String nomeArquivo1 = MyIO.readString();
        String nomeArquivo2 = MyIO.readString();
        Arq.openRead(nomeArquivo1);
        String texto = Arq.readAll();
        builder.append(texto);
        Arq.close();  

        Arq.openWrite(nomeArquivo2);
        reverse = builder.reverse();
        texto = reverse.toString();
        Arq.print(texto);
        Arq.close();    
    }

    /*Leia o nome de um arquivo e mostre na tela o conteúdo desse arquivo 
    criptografado usando o ciframento de César (k = 3)*/
    public static void cripCesar(){
        String nomeArquivo = MyIO.readString();
        StringBuilder builder = new StringBuilder();
        Arq.openRead(nomeArquivo);
        String texto = Arq.readAll();
        Arq.close();      

        for (int i = 0; i < texto.length(); i++) {
            if(texto.charAt(i) != '\n'){
                int aux= ((int) texto.charAt(i)) + 3;
                builder.append( (char)aux);
            }else{
                builder.append("\n");
            }
        } 
        MyIO.println(builder.toString());
        Arq.openWrite("cripCesar.txt");
        Arq.print(builder.toString());
        Arq.close();   
    }

    /*Leia o nome de um arquivo contendo uma mensagem criptografada com o 
    Ciframento de César (k = 3), descriptografe a mensagem e mostre-a na tela*/
    public static void descripCesar(){
        String nomeArquivo = MyIO.readString();
        StringBuilder builder = new StringBuilder();
        Arq.openRead(nomeArquivo);
        String texto = Arq.readAll();
        Arq.close(); 

        for (int i = 0; i < texto.length(); i++) {
            if(texto.charAt(i) != '\n'){
                int aux= ((int) texto.charAt(i)) - 3;
                builder.append( (char)aux);
            }else{
                builder.append("\n");
            }
        } 
        MyIO.println(builder.toString());
    }

    /*Seja os arquivos Pilha.java e PrincipalPilha.java
    (fonte/tadEstatica), altere o segundo de tal forma que ele
    contenha um menu com as opções (1) Inserir, (2) Remover (3)
    Listar (4) Sair, permitindo inserções, remoções e listar os
    elementos de uma pilha. Quando executamos o PrincipalPilha,
    ele lê os elementos da pilha de um arquivo pilha.dat. Quando
    o usuário seleciona a opção (4) Sair, o programa salva os
    elementos da pilha no arquivo pilha.dat. Devemos manter a
    ordem dos elementos a cada nova execução do PrincipalPilha.*/
    public static void pilha(){
        
    }

    public static void menu(){
        MyIO.println("**********MENU**********");
        MyIO.println("0- sair");
        MyIO.println("1- escreverFrase");
        MyIO.println("2- printarTela");
        MyIO.println("3- toUpperCase");
        MyIO.println("4- copiaCola");
        MyIO.println("5- toLowerCase");
        MyIO.println("6- inverteArquivo");
        MyIO.println("7- cripCesar");
        MyIO.println("8- descripCesar");
        MyIO.println("9- pilha");
    }
    public static void main(String[] args) {
        menu(); //ok
        MyIO.print("Digite o numero da questao: ");
        int q = MyIO.readInt();

        if(q == 0){

        }else if(q == 1){
            escreverFrase(); //ok
        }else if(q == 2){
            printarTela(); //ok
        }else if(q == 3){
            toUpperCase(); //ok
        }else if(q == 4){
            copiaCola(); //ok
        }else if(q == 5){
            toLowerCase(); //ok
        }else if(q == 6){
            inverteArquivo(); //ok
        }else if(q == 7){
            cripCesar(); //ok
        }else if(q == 8){
            descripCesar(); //ok
        }else if(q == 9){
            //pilha();
        }
    }
}
