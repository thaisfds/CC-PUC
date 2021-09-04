import java.util.Scanner;

public class ExemploArq {
    //Arq. é uma classe que facilita a utilização de arquivos em java

    //escrita de arquivos em java
    public static void exemploArq01() {
        Arq.openWrite("exemplo.txt");
        Arq.println(1);
        Arq.println(5.3);
        Arq.println('X');
        Arq.println(true);
        Arq.println("Algoritmos");
        Arq.close();
    }

    //leitura de arquivos em java
    public static void exemploArq02() {
        Arq.openRead("exemplo.txt");
        final int inteiro = Arq.readInt();
        final double real = Arq.readDouble();
        final char caractere = Arq.readChar();
        final boolean boleano = Arq.readBoolean();
        final String str = Arq.readString();
        Arq.close();
        System.out.println("inteiro: " + inteiro);
        System.out.println("real: " + real);
        System.out.println("caractere: " + caractere);
        System.out.println("boleano: " + boleano);
        System.out.println("str: " + str);
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        exemploArq01();
        exemploArq02();
    }
}