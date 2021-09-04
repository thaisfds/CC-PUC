import java.util.Scanner;

//Obs. Só consegui pensar de forma recursiva, então esse é o resultado da questão 5 e da questão 14

public class TP01Q05Booleana {

    //realiza a leitura da frase e os calculos
    public static int leitura(tradutor tradutor){
        int resultado = 0; //armazena o resultado da operação
        int aux = 0; //variavel auxiliar utilizada no and e or
        String s = tradutor.getString(); //pega a linha a ser trabalhada
        char c = s.charAt(tradutor.getPosicao()); //pega o valor na primeira posição
        
        if (c == 'A') {
            resultado = tradutor.getNumeros(0); //retorna A
            //System.out.println("a: " + resultado);
        } else if (c == 'B') {
            resultado = tradutor.getNumeros(1); //retorna B
            //System.out.println("b: " + resultado);
        } else if (c == 'C') {
            resultado = tradutor.getNumeros(2); //retorna C
            //System.out.println("c: " + resultado);
        }else if (c == 'n') { //operação not
            tradutor.posicaoPP(4);
            if (leitura(tradutor) == 0) {resultado = 1;} //se ler 0 retorna 1
            else if (leitura(tradutor) == 1) {resultado = 0;} //se ler 1 retorna 0
            tradutor.posicaoPP(1);
            //System.out.println("not: " + resultado);
        }else if (c == 'a') { //operação and
            tradutor.posicaoPP(4);
            resultado = leitura(tradutor); //pega o primeiro dado
            tradutor.posicaoPP(1);
            //System.out.println(s.charAt(tradutor.getPosicao()));
            //System.out.println("result: " + resultado + " aux: " + aux);
            while (s.charAt(tradutor.getPosicao()) == ',') {
                tradutor.posicaoPP(1); //pega o segundo dado
                aux = leitura(tradutor);
                //System.out.println("result: " + resultado + " aux: " + aux);
                if (resultado == 0 || aux == 0) {resultado = 0;}  //se um dos valores for 0 retorna 0
                else {resultado = 1;} //se os dois numeros forem 1 retorna 1
                tradutor.posicaoPP(1);
            }
            //System.out.println("and: " + resultado);
            
        }else if (c == 'o') { //operação or
            tradutor.posicaoPP(3);
            resultado = leitura(tradutor); //pega o primeiro dado
            tradutor.posicaoPP(1);
            //System.out.println(s.charAt(tradutor.getPosicao()));
            //System.out.println("result: " + resultado + " aux: " + aux);
            while (s.charAt(tradutor.getPosicao()) == ',') {
                tradutor.posicaoPP(1); //pega o segundo dado
                aux = leitura(tradutor);
                //System.out.println("result: " + resultado + " aux: " + aux);
                if (resultado == 1 || aux == 1) {resultado = 1;}  //se um dos valores for 1 retorna 1
                else {resultado = 0;} //se os dois numeros forem 0 retorna 0
                tradutor.posicaoPP(1);
            }
            //System.out.println("or: " + resultado);
        }
        
        return resultado;
    }

    public static String tiraEspaco(String s) {
        String semEspaco = s;
        return semEspaco.replace(" ", "");
    }
         
    public static void main (String[] args){
        Scanner linha = new Scanner(System.in); //pega o que tem na linha com o scanner
        tradutor tradutor = new tradutor(); //classe criada para traduzir a string
        int numeroEntrada = linha.nextInt(); //pega o primeiro dado, quantidade de numeros da operação
        String comEspaco = ""; //armazena a string com espaço
        String semEspaco = ""; //armazena a string sem espaço
        int resultado = 0;

        while (numeroEntrada != 0){
            int[] numeros = new int[3]; //armazena os numeros da operação
            for (int i = 0; i < numeroEntrada; i++) {
                numeros[i] = linha.nextInt(); //pega os numero
            }
            tradutor.setNumeros(numeros); //seta os numeros na classe traduçao

            comEspaco = linha.nextLine(); //pega o resto da linha
            semEspaco = tiraEspaco(comEspaco); //transforma a linha para não ter espaço
            tradutor.setString(semEspaco);

            tradutor.setPosicao(0); //seta a posição inicial do tradutor

            resultado = leitura(tradutor); //faz a leitura e calculo da algebra
            System.out.println(resultado); //printa o resultado
            numeroEntrada = linha.nextInt(); //pega novamente a quantidade de numeros

        }
    }    
}

//classe utilizada para armazenar os dados da questão e fazer as variaçoes de posicao para leitura
class tradutor{
    private String string; //string lida já sem espaço
    private int posicao; //posiçao analizada
    private int[] numeros = new int[3]; //entradas binárias A,B,C

    public tradutor(){
        this.string = "";
        this.posicao = 0;
        for(int i=0 ; i<numeros.length ; i++){
            this.numeros[i] = 0;
        }
    }

    public void setString(String string){
        this.string = string;
    }
    public void setPosicao(int posicao){
        this.posicao = posicao;
    }
    public void setNumeros(int[] numeros){
        for (int i = 0; i < 3; i++) {
            this.numeros[i] = numeros[i];
        }
    }
    public void posicaoPP(int i) {
        this.posicao = posicao + i;
    }

    public String getString(){
        return string;
    }
    public int getPosicao(){
        return posicao;
    }
    public int[] getNumeros(){
        return numeros;
    }
    public int getNumeros(int i){
        return numeros[i];
    }
    
}