import java.io.*;
import java.util.*;

public class TP01Q09Arquivo {

    //função que lê o pub.in e cria um arquivo com os dados lidos
    public static void newFile(int n, double d) throws Exception {
        Scanner input = new Scanner(System.in); //lê com o scanner
        RandomAccessFile raf = new RandomAccessFile("exemplo.txt", "rw");//abre o arquivo para escrita
        for (int i = 0; i < n; i++) {
            d = MyIO.readDouble(); //le o pub.in e salva em d
            raf.writeDouble(d); //salva d no arquivo
        }

        raf.close();//fecha arquivo
    }

    
    //função que lê o arquivo e printa ao contrário
    public static void contrario(int n, double d) throws Exception {
        RandomAccessFile raf = new RandomAccessFile("exemplo.txt", "rw");//abre o arquivo para leitura
        int i = 0; //valor inteiro
        
        for (int j = 0; j < n; n--) {
            raf.seek((n - 1) * 8); //method sets the file-pointer offset
            d = raf.readDouble();
            i = (int) d; //salva d como int
            if (d == (long) d){MyIO.println(i);}// se for long printa o int
            else {MyIO.println(d);} //se n printa o double
        }

        raf.close();//fecha o arquivo
    }

    /*
        for que percorre o arquivo seek vai para n -1 multiplicado pelo numero de
        bytes de um double dessa forma vai para uma nova linha mesmo que com números
        de tamanhos diferentes lê o numero se o número tiver o mesmo tamanho de uma
        long, printa como double se não printa como inteiro
    */

    
    public static void main(final String[] args) throws Exception {
        int n = 0; //quantidade de numeros contidos no pub.in
        n = MyIO.readInt(); //pega a quantidade de numeros
        double d = 0; //valor para escrita no arquivo
        newFile(n, d); //cria um novo arquivo
        contrario(n,d); //printa os dados ao contrário
    }// fim main

}// fim arquivo