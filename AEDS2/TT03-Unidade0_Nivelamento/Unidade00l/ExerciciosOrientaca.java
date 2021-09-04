import java.io.*;
import java.util.*;

public class ExerciciosOrientaca {
    
    /*Faça uma classe retângulo contendo os atributos base e 
    altura, pelo menos dois métodos construtores, o método 
    double getArea() que retorna a área do retângulo, o método 
    double getPerimetro() que retorna o perímetro do retângulo e 
    o método double getDiagonal() que retorna a diagonal do 
    retângulo*/

    class retangulo {
    private double base = 0;
    private double altura = 0;

    public retangulo() {
        this.base = 0;
        this.altura = 0;
    }

    public retangulo(double a, double b) {
        this.base = b;
        this.altura = a;
    }

    public void setBase(double b) {
        this.base = b;
    }

    public void setAltura(double a) {
        this.altura = a;
    }

    public double getBase() {
        return base;
    }

    public double getAltura() {
        return altura;
    }

    public void leitor() {
        Scanner input = new Scanner(System.in);
        setBase(input.nextDouble());
        setAltura(input.nextDouble());
    }

    public void escreveAll() {
        System.out.println("base = " + getBase());
        System.out.println("altura = " + getAltura());
        System.out.println("perimetro = " + getPerimetro());
        System.out.println("area = " + getArea());
        System.out.println("diagonal = " + getDiagonal());

    }

    // exercício 1
    public double getArea() {
        double area = 0;
        double b = getBase();
        double a = getAltura();
        area = a * b;
        return area;
    }

    // exercício 2
    public double getPerimetro() {
        double perimetro = 0;
        double b = getBase();
        double a = getAltura();
        perimetro = 2 * (a + b);
        return perimetro;
    }

    // exercício 3
    public double getDiagonal() {
        double diagonal = 0;
        double b = getBase();
        double a = getAltura();
        double aux = Math.pow(a, 2) + Math.pow(b, 2);
        diagonal = Math.sqrt(aux);
        return diagonal;
    }

    public void classeTriangulo() {
        retangulo ret1 = new retangulo();
        retangulo ret2 = new retangulo();
        // o método escreveALl() já chama todos os outros métodos automaticamente
        ret1.leitor();
        ret1.escreveAll();
        ret2.leitor();
        ret2.escreveAll();
    }

    /*Faça também uma classe Lixao contendo um método main 
    sendo que esse terá dois objetos do tipo retângulo e chamará 
    os métodos desenvolvidos na classe retângulo*/
    /**/



    public static void menu(){
        MyIO.println("**********MENU**********");
        MyIO.println("0- sair");
        MyIO.println("1- escreverFrase");
        MyIO.println("2- printarTela");
    }
    public static void main(String[] args) {
        menu(); //ok
        MyIO.print("Digite o numero da questao: ");
        int q = MyIO.readInt();

        if(q == 0){

        }else if(q == 1){
            classeTriangulo();
        }else if(q == 2){
            
        }
    }
}