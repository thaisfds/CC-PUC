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
        if(n>= array.length){System.out.println("ERRO");}
        else{
            array[n] = x;
        n++;
        }
        
    }
    public void imprimir(){
        System.out.println("======INICIO DA LISTA======");
        for(int i=0; i<n; i++){
            System.out.println(array[i]);
        }
        System.out.println("======FINAL DA LISTA======");
    }
    int getTamanho(){
        return array.length;
    }
    String getArray(int i){
        return array[i];
    }


}

public class PesquisaSequencial extends Lista {
    public static int comparacoes = 0;

    //função que padroniza as entradas .html para usarem ' ' ao inves de  '_'
    public static String replace (String s){
        String resp = "";
        int i=0;
        while(i<s.length()){
            if(s.charAt(i) == '_'){
                resp += ' ';
            }else{resp += s.charAt(i);}
            i++;
        }
        return resp;
    }

    //função de pesquisa que recebe as entradas e o tamnho dela
    public static void pesquisar(String[] s, int count) {
        int tam = l1.getTamanho(); //pega o tamanho da lista
        for (int i = 0; i < count; i++) {
            Boolean achou = false; //bool de resposta
            for (int j = 0; j < tam; j++) {
                String nome = l1.getArray(j); //pega um nome da lista e armazena
                comparacoes++;
                if(nome.contains(s[i]) == true) { //compara a entrada com o que tem na
                    achou = true;
                    j = tam;
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

    }

    public static void logCreator(long tempo1, long tempo2) throws IOException  {
        long tempoExecucao = tempo2 - tempo1;
        File log = new File("741648_sequencial.txt");
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

        int i = 0;
        entrada[i] = br.readLine(); //armazena a primeira entrada

        //pega todas as entradas até encontrar FIM
        while (entrada[i].equals("FIM") == false) {
            i++;
            entrada[i] = br.readLine();
        }

        pesquisar(entrada,i); //manda pesquisar
        long tempo2 = new Date().getTime(); //pega o time do final da pesquisa
        logCreator(tempo1, tempo2); //cria o arquivo com os dados da execução
    }

}