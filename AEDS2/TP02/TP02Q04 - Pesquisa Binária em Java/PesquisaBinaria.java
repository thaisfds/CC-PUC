import java.io.*;
import java.util.*;

class Lista{
    public static Lista l1 = new Lista();
    private String[] array;
    private int n;

    Lista(){
        array = new String[40];
        n = 0;
        for(int i=0; i<40; i++){
            array[i] = "";
        }
    }
    Lista(int tamanho){
        array = new String[tamanho];
        n = 0;
        for(int i=0; i<tamanho; i++){
            array[i] = "";
        }
    }
    public void inserirFinal(String x){
        if(n> array.length){System.out.println("ERRO1");}
        else{
            array[n] = x;
        n++;
        }
        
    }
    public void inserir(String x, int i){
        if(n<i){System.out.println("ERRO2");}
        else{array[i] = x;}
        
    }
    public void imprimir(){
        System.out.println("======INICIO DA LISTA======");
        for(int i=0; i<n; i++){
            System.out.println(array[i]);
        }
        System.out.println("======FINAL DA LISTA======");
    }
    int getTamanho(){
        return n;
    }
    String getArray(int i){
        return array[i];
    }


}

public class PesquisaBinaria extends Lista {
    public static int comparacoes = 0;

    //função que padroniza as entradas .html para usarem ' ' ao inves de  '_'
    public static String replace (String s){
        String resp = "";
        int i=0;
        while(i<s.length()){
            if(s.charAt(i) == '_'){
                resp += ' ';
            }else if(s.charAt(i) == '.'){
                return resp;
            }
            else{resp += s.charAt(i);}
            i++;
        }
        return resp;
    }

    //função de pesquisa que recebe as entradas e o tamnho dela
    public static void pesquisar(String s) {
        Boolean achou = false; //bool de resposta
        int tam = l1.getTamanho(); //pega o tamanho da lista
        int dir = (tam - 1), esq = 0, meio;
        while (esq <= dir){
            comparacoes++;
            meio = (esq + dir) / 2;
            String s2 = l1.getArray(meio);
            if (s2.compareTo(s) == 0){
                comparacoes++;
                achou = true;
                esq = dir + 1;
            }
            else if (s2.compareTo(s)<0){
                comparacoes +=2;
                esq = meio + 1;
            }
            else{
                comparacoes +=2;
                dir = meio - 1;
            }
        }
        comparacoes++;
        if (achou == true) {
            System.out.println("SIM");
        } else if (achou == false) {
            System.out.println("NÃO");
        }
        comparacoes++;

    }
    
    public static void ordenar(){
        int tam = l1.getTamanho();
        for (int i = 0; i < tam; i++){
            for (int j = 0; j < tam; j++){
                String s1 = l1.getArray(i);
                String s2 = l1.getArray(j);
                if ( s1.compareTo(s2) < 0){
                    String aux = s1; // insere array[i] no aux
                    l1.inserir(s2,i);// insere array[j] na posição do arrai [i]
                    l1.inserir(aux,j); // insere aux na posição do array [j]
                }
            }
        }
    }

    public static void logCreator(long tempo1, long tempo2) throws IOException  {
        long tempoExecucao = tempo2 - tempo1;
        File log = new File("741648_binaria.txt");
        FileWriter logWriter = new FileWriter(log);
        logWriter.write("741648\t" + tempoExecucao + "\t" + comparacoes);
        logWriter.close();
    }

    //main
    public static void main (String[] args) throws IOException {
        long tempo1 = new Date().getTime(); //pega o time do inicio da pesquisa
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in, "ISO-8859-1"));
        String html = br.readLine(); //armazena os .html
        String[] entrada = new String[200]; //armazena as pesquisas
        
        //pega todos os htmls e salva em uma lista
        while (html.equals("FIM") == false) {
            l1.inserirFinal(replace(html));
            html = br.readLine();
        }
        ordenar();

        int i = 0;
        entrada[i] = br.readLine(); //armazena a primeira entrada
        //pega todas as entradas até encontrar FIM
        while (entrada[i].equals("FIM") == false) {
            pesquisar(entrada[i]); //manda pesquisar
            i++;
            entrada[i] = br.readLine();
        }

        long tempo2 = new Date().getTime(); //pega o time do final da pesquisa
        logCreator(tempo1, tempo2); //cria o arquivo com os dados da execução
    }
}